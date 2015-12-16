/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/16 19:22:56 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*elem;
	int		i;

	i = 0;
	elem = begin_list;
	while (elem)
	{
		elem = elem->next;
		i++;
	}
	return (i);
}

void	ft_list_foreach(t_list *begin_list, void (*f)(void*))
{
	int		i;
	int		size;
	t_list	*elem;

	i = 0;
	size = ft_list_size(begin_list);
	elem = begin_list;
	while (i < size)
	{
		(*f)(begin_list->data);
		elem = elem->next;
		i++;
	}
}
