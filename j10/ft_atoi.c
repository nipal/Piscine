/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/10/21 14:17:21 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	int i;

	i = 0;
	if ((c >= 9 && c <= 13) || c == 32)
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	coef;

	i = 0;
	nbr = 0;
	coef = 1;
	if (str)
	{
		while (is_space(*(str + i)))
			i++;
		if (*(str + i) == '-' || *(str + i) == '+')
		{
			coef = 44 - *(str + i);
			i++;
		}
		while (*(str + i) >= '0' && *(str + i) <= '9')
		{
			nbr *= 10;
			nbr += *(str + i) - '0';
			i++;
		}
		nbr *= coef;
	}
	return (nbr);
}
