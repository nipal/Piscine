/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/10/21 14:17:21 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_liste.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		*elem;

	i = 1;
	list = ft_create_elem(av[0]);
	if (!list)
		return (0);
	while (i < ac)
	{
		elem = ft_create_elem(av[i]);
		if (!elem)
			return (0);
		elem->next = list;
		list = elem;
		i++;
	}
	return (list);
}
