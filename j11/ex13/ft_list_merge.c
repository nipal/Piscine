/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/10/21 14:17:21 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void 	ft_list_merge(t_list **begin_list1, t_list *begin_liste2)
{
	t_list	l1;

	if (!begin_list1)
		return;
	l1 = *begin_list1;
	while (l1->next)
		l1 = l1->next;
	if (*begin_list1)
		l1->next = begin_list2;
	else
		*begin_list1 = *begin_list2;
}
