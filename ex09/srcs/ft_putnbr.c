/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 12:11:02 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/01 22:03:43 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr(int nb)
{
	int	factor;

	factor = 10000;
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb != 0)
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
		{
			ft_putchar('0');
		}
	}
}
