/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/16 20:35:25 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*end;
	t_list	*sprinter;
	t_list	*ziper;
	void	*data_swap;

	if (!begin_list)
		return ;
	ziper = begin_list;
	end = ziper;
	sprinter = ziper->next;
	while (end->next)
		end = end->next;
	while (sprinter != end && sprinter->next != end)
	{
		data_swap = end->data;
		end->data = ziper->data;
		ziper->data = data_swap;
		while (sprinter->next != end)
			sprinter = sprinter->next;
		end = sprinter;
		ziper = ziper->next;
		sprinter = ziper;
	}
}
