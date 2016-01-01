/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/31 15:28:22 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

int				ft_nb_char(int incr)
{
	static	int	count = 0;

	count += incr;
	return (count);
}

int				pow_16(int pow)
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

static	void	addapt_char2(int c, t_ucc *str)
{
	t_ucc	*tab;

	tab = (t_ucc*)"0123456789abcdef";
	str[3] = '\0';
	str[0] = ' ';
	str[1] = tab[((c / 16) % 16)];
	str[2] = tab[c % 16];
}

void			ft_putchar(t_ucc c)
{
	t_ucc	*oct;

	oct = (t_ucc*)malloc(sizeof(t_ucc) * 4);
	oct[4] = 0;
	if ((ft_nb_char(0) % SIZE_BUFF) == 0)
		ft_put_line_number(0);
	if ((ft_nb_char(0) % 8) == 0 && gbl_mode(GET, 0) == CHAR)
		write(1, " ", 1);
	addapt_char2(c, oct);
	write(1, oct, 3);
	ft_nb_char(1);
	free(oct);
}

void			ft_putstr2(t_ucc *str, int nb_char)
{
	t_ucc	c;
	int		i;

	i = 0;
	if (ft_nb_char(0))
	{
		if (nb_char <= 8 && gbl_mode(GET, 0) == CHAR)
			write(1, " ", 1);
		write(1, "  |", 3);
		while (i < nb_char)
		{
			c = str[i];
			if (c >= 32 && c <= 126)
				write(1, &c, 1);
			else
				write(1, ".", 1);
			i++;
		}
		write(1, "|", 1);
	}
}
