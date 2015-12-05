/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 07:44:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/27 22:53:41 by fjanoty          ###   ########.fr       */
/*                                                                          */
/* ************************************************************************** */

#include "convert_char.h"

int		what_operator(char *str, t_opp func)
{
	int		i;

	i = 0;
	while (str && i < 6)
	{
		if (ope[i] && ft_strcmp(func[i][0], str) == 0)
			return (i);
		i++;
	}
	return (-1);
}

long			ft_atol(char *str)
{
	int		i;
	long	nbr;
	long	coef;

	i = 0;
	nbr = 0;
	coef = 1;
	if (str)
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			coef = 44 - str[i];
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			nbr *= 10;
			nbr += str[i] - '0';
			i++;
		}
		nbr *= coef;
	}
	return (nbr);
}
