/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/16 19:22:45 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*elem;

	elem = ft_create_elem(data);
	if (!elem)
		return ;
	elem->next = *begin_list;
	elem->data = data;
	*begin_list = elem;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	**list;
	t_list	*init;
	int		i;

	i = 2;
	if (ac >= 2)
		init = ft_create_elem(av[1]);
	else
		init = NULL;
	list = &init;
	while (i < ac)
	{
		ft_list_push_front(list, av[i]);
		i++;
	}
	return (*list);
}
