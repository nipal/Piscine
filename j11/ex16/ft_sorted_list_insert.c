/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/10/21 14:17:21 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
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
		elem->next = ft_create_elem(data);
		(elem->next)->next = tmp;
	}
	else
		*begin_list = ft_create_elem(data);
}
