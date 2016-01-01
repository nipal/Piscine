/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 01:16:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/22 22:56:30 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *item, int (*cmpf)(void*, void*))
{
	if (root)
	{
		if (cmpf(item, root->item) == 0)
			return (root->item);
		else if (cmpf(item, root->item) < 0)
		{
			if (root->left)
				return (btree_search_item(root->left, item, cmpf));
			else
				return (NULL);
		}
		else
		{
			if (root->right)
				return (btree_search_item(root->right, item, cmpf));
			else
				return (NULL);
		}
	}
	return (NULL);
}
