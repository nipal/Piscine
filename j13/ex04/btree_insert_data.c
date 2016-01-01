/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 00:18:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/22 21:28:39 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_insert_btree_data(t_btree *node
		, void *item, int (*cmpf)(void*, void*))
{
	if ((*cmpf)(item, node->item) < 0)
	{
		if (node->left)
			ft_insert_btree_data(node->left, item, cmpf);
		else
			node->left = btree_create_node(item);
	}
	else
	{
		if (node->right)
			ft_insert_btree_data(node->right, item, cmpf);
		else
			node->right = btree_create_node(item);
	}
}

void	btree_insert_data(t_btree **root, void *item
		, int (*cmpf)(void*, void*))
{
	if (root)
	{
		if (*root)
			ft_insert_btree_data(*root, item, cmpf);
		else
			*root = btree_create_node(item);
	}
}
