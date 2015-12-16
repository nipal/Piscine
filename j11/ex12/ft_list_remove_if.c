/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/15 20:17:30 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*prev;
	t_list	*current;

	if (!begin_list || !*begin_list)
		return ;
	current = (*begin_list)->next;
	prev = *begin_list;
	while (current)
	{
		if ((*cmp)(data_ref, current->data) == 0)
		{
			prev->next = current->next;
			free(current);
		}
		else
			prev = current;
		current = prev->next;
	}
	if ((*cmp)(data_ref, (*begin_list)->data) != 0)
		return ;
	current = (*begin_list)->next;
	free(*begin_list);
	*begin_list = current;
}
