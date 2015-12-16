/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/16 18:53:22 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*elem;
	t_list	*prev;
	t_list	*insert;

	insert = ft_create_elem(data);
	if (!insert)
		return ;
	elem = *begin_list;
	prev = 0;
	while (elem && (*cmp)(insert->data, elem->data) > 0)
	{
		prev = elem;
		elem = elem->next;
	}
	if (prev)
		prev->next = insert;
	else
		*begin_list = insert;
	insert->next = elem;
}
