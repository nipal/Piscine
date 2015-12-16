/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/16 20:36:09 by fjanoty          ###   ########.fr       */
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

void	ft_swap_elem(t_tab_list tab)
{
	t_list *temp;

	temp = tab.elem2->next;
	tab.elem0->next = tab.elem2;
	tab.elem2->next = tab.elem1;
	tab.elem1->next = temp;
}

void	ft_init_elem(t_tab_list tab, t_list *init_elem, int *nb)
{
	tab.elem0 = init_elem;
	tab.elem1 = init_elem->next;
	tab.elem2 = init_elem->next->next;
	nb[1] = 0;
}

void	ft_up_elem(t_tab_list tab)
{
	tab.elem0 = tab.elem1;
	tab.elem1 = tab.elem2;
	tab.elem2 = (tab.elem2)->next;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int			nb[2];
	t_tab_list	tab;

	nb[0] = ft_list_size(*begin_list);
	while (nb[0] >= 3)
	{
		ft_init_elem(tab, *begin_list, nb);
		while (nb[1] < (nb[0] - 2))
		{
			if ((*cmp)(tab.elem1, tab.elem2) > 0)
				ft_swap_elem(tab);
			ft_up_elem(tab);
			nb[1]++;
		}
		nb[0]--;
	}
	if (nb[0] < 2)
		return ;
	if ((*cmp)(*begin_list, (*begin_list)->next) > 0)
	{
		ft_init_elem(tab, *begin_list, nb);
		*begin_list = tab.elem1;
		(*begin_list)->next = tab.elem0;
		((*begin_list)->next)->next = tab.elem2;
	}
}
