/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/10/21 14:17:21 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, *t_list insert, int (*cmp)())
{
	t_list *elem;
	t_list *tmp;

	elem = *begin_list;
	tmp = 0;
	while (elem && (*cmp) (data, elem->data) < 0)
	{
		tmp = elem;
		elem = elem->next;
	}
	if (!elem && tmp)
		elem = tmp;
	else if (elem)
	{
		tmp = elem->next;
		elem->next = insert;
		(elem->next)->next = tmp;
	}
	else
	{
		*begin_list = insert;
		(*begin_list)->next = 0;
	}
}

void	ft_sorted_list_merge(t_list **bgl1, t_list *bgl2, int (*cmp)())
{
	t_list	*tmp;

	while (bgl2)
	{
		tmp = bgl2->next;
		ft_sorted_list_insert(bgl1, bgl2, cmp);
		bgl2 = tmp;
	}
}
