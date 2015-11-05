/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 07:44:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/05 06:49:46 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert_char.h"

operateur	init_operator(int nb_ope)
{
	operateur	tab_ft[5];

	tab_ft[0] = &ft_add;	
	tab_ft[1] = &ft_sub;	
	tab_ft[2] = &ft_mul;	
	tab_ft[3] = &ft_div;	
	tab_ft[4] = &ft_mod;	
	return (tab_ft[nb_ope]);
}

int			what_operator(char *str)
{
	int		i;
	char	*ope;

	i = 0;
	ope = ft_strdup("+-*/%");
	if(str && str[0] && ope[i] && !str[1])
	{
		while (i < 5)
		{
			if (str[0] == ope[i])
				return (i);
			i++;
		}
	}
	return (-1);
}

long		ft_atol(char *str)
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
