/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmunoz <jmunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 20:41:59 by jmunoz            #+#    #+#             */
/*   Updated: 2015/11/01 22:09:30 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print_result.h"

int		ft_print_result(int *result, int x, int y)
{
	int		i;
	int		first;

	first = 1;
	i = 0;
	while (i < 5)
	{
		if (result[i] == 1)
		{
			if (first)
				first = 0;
			else
				write(1, " || ", 4);
			write(1, "[colle-0", 8);
			ft_putchar(i + '0');
			write(1, "] [", 3);
			ft_putnbr(x);
			write(1, "] [", 3);
			ft_putnbr(y);
			write(1, "]", 1);
		}
		i++;
	}
	return (first);
}
