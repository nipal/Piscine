/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_line_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 23:14:07 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/31 13:13:51 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

void			ft_put_line_number(int last)
{
	int		i;
	t_ucc	*convert;
	int		nb_char;
	int		max;

	if (gbl_mode(GET, 0) == HEX)
		max = 7;
	else
		max = 8;
	nb_char = ft_nb_char(0);
	i = 0;
	convert = (t_ucc*)"0123456789abcdef";
	if (has_printed())
		write(1, "\n", 1);
	if (!ft_nb_char(0) && last)
		return ;
	while (i < max)
	{
		write(1, convert + ((nb_char / pow_16((max - 1) - i)) % 16), 1);
		i++;
	}
	if (last)
		write(1, "\n", 1);
}
