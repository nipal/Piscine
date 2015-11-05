/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 01:45:17 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/05 05:33:51 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long nb)
{
	long	factor;

	factor = 1000000000000000000;
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 0)
		{
			while ((nb / factor) == 0 && nb != 0)
				factor /= 10;
			while (factor != 0)
			{
				ft_putchar((nb / factor) % 10 + '0');
				factor /= 10;
			}
		}
		else
			ft_putchar('0');
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = (char*)malloc(sizeof(char) * i + 1);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
