/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 14:35:49 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/23 01:28:21 by fjanoty          ###   ########.fr       */
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

int		is_first(int act_lvl)
{
	static	int	lvl = -1;

	if (act_lvl > lvl)
	{
		lvl = act_lvl;
		return (1);
	}
	else
		return (0);
}

void	print_level(t_btree *node, const int lvl_to_print, int act_lvl
		, void (*applyf)(void *item, int act_lvl, int is_firstelem))
{
	if (act_lvl + 1 < lvl_to_print)
	{
		if (node->left)
			print_level(node->left, lvl_to_print, act_lvl + 1, applyf);
		if (node->right)
			print_level(node->right, lvl_to_print, act_lvl + 1, applyf);
	}
	else if (act_lvl + 1 == lvl_to_print)
	{
		if (node->left)
			(*applyf)(node->left->item, act_lvl + 1, is_first(act_lvl + 1));
		if (node->right)
			(*applyf)(node->right->item, act_lvl + 1, is_first(act_lvl + 1));
	}
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int act_lvl, int is_firstelem))
{
	int	size;
	int	i;

	i = 1;
	size = btree_level_count(root);
	if (root)
		applyf(root->item, 0, is_first(0));
	while (i < size)
	{
		print_level(root, i, 0, applyf);
		i++;
	}
}
