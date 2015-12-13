/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/03 23:04:44 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"
#include <stdio.h>

int				ft_nb_char(int incr)
{
	static	int	count = 0;

	count += incr;
	return(count);
}

static	int		pow_16(int pow)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < pow)
	{
		result *= 16;
		i++;
	}
	return (result);
}

static	void	addapt_char(int c, ucc *str)
{
	ucc	*tab;

	tab = (ucc*)"abtnvfr";
	str[0] = ' ';
	str[1] = ' ';
	str[2] = ' ';
	if  ((c >= 1 && c <= 6) || (c >= 14 && c <= 31) || (c >= 127 && c <= 159))
	{
		str[1] = (((c / 64) % 8) + '0');
		str[2] = (((c / 8) % 8) + '0');
		str[3] = ((c % 8) + '0');
	}
	else if  (c == 0 || (c >= 7 && c <= 13))
	{
		str[2] = '\\';
		if (!c)
			str[3] = '0';
		else
			str[3] = tab[c - 7];
	}
	else if  ((c >= 32 && c <= 126) || (c >= 160 && c <= 239))
		str[3] = c;
}

void	ft_put_line_number(int	last)
{
	int		i;
	ucc		*convert;
	int		nb_char = ft_nb_char(0);

	i = 0;
	convert = (ucc*)"0123456789abcdef";
	if (nb_char)
		write(1, "\n", 1);
	while (i < 7)
	{
		write(1, convert + ((nb_char / pow_16(6 - i) ) % 16), 1);
		i++;
	}
	if (last)
		write(1, "\n", 1);
}

void	ft_putchar(ucc c)
{
	ucc	*oct;

	oct = (ucc*)malloc(sizeof(ucc) * 4);
	oct[4] = 0;
	if ((ft_nb_char(0) % SIZE_BUFF) == 0)
		ft_put_line_number(0);
	addapt_char(c, oct);
	write(1, oct, 4);
	ft_nb_char(1);
	free(oct);
}
