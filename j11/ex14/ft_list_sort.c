/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/10/21 14:17:21 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap_elem(t_list *elem)
{
	t_list *temp;

	temp = (elem[2])->next;
	(elem[0])->next = elem[2];
	(elem[2])->next = elem[1];
	(elem[1])->next = temp;
}

void	ft_init_elem(t_list *elem, t_list *init_elem, int *nb)
{
	elem[0] =	init_elem;
	elem[1] =	init_elem->next;
	elem[2] =	(init_elem)`->next->next;
	*nb[1]= 0;
}

void	ft_up_elem(t_list *elem)
{
	elem[0] = elem[1];
	elem[1] = elem[2];
	elem[2] = (elem[2])->next;

}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		nb[2];
	t_list	elem[3];

	nb[0] = ft_list_size(*begin_list);
	while (nb[0] >= 3)
	{
		ft_init_elem(elem, *begin_list, nb);
		while (nb[1] < (nb[0] - 2))
		{
			if ((*cmp)(elem[1], elem[2]) > 0)
				ft_swap_elem(elem);
			ft_up_elem(elem);
			nb[1]++;
		}
		nb[0]--;
	}
	if (siwze < 2)
		return;
	if ((*cmp)(*begin_list, (*brgin_list)->next) > 0)
	{
		ft_init_elem(elem, *begin_list, nb);
		*begin_list = elem[1];
		(*begin_list)->next = elem[0];
		((*begin_list)->next)->next = elem[2];
	}
}
