/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/15 20:12:22 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *bgl, void (*f)(void*),
		void *d_ref, int (*cmp)())
{
	if (!bgl)
		return ;
	if ((*cmp)(bgl->data, d_ref) == 0)
		(*f)(bgl->data);
	ft_list_foreach_if(bgl->next, f, d_ref, cmp);
}
