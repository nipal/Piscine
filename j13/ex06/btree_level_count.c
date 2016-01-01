/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 01:41:36 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/22 22:56:29 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_count_lvl(t_btree *node, int *lvl_max, int lvl_current)
{
	if (lvl_current > *lvl_max)
		*lvl_max = lvl_current;
	if (node->left)
		ft_count_lvl(node->left, lvl_max, lvl_current + 1);
	if (node->right)
		ft_count_lvl(node->right, lvl_max, lvl_current + 1);
}

int		btree_level_count(t_btree *root)
{
	int	lvl_max;

	lvl_max = 0;
	ft_count_lvl(root, &lvl_max, 1);
	return (lvl_max);
}
