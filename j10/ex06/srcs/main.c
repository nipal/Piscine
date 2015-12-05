/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 00:21:41 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/05 20:26:23 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

int		main(int ac, char **av)
{
	if (ac == 4)
		affichator(ft_atol(av[1]), ft_atol(av[3]), what_operator(av[2]));
	return (0);
}

void	affichator(long a, long b, int i)
{
	t_operateur	f;

	if (i == 3 && b == 0)
		ft_putstr("Stop : division by zero\n");
	else if (i == 4 && b == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		f = init_operator(i);
		if (i == -1)
		{
			ft_putstr("0\n");
			return ;
		}
		ft_putnbr(f(a, b));
		ft_putchar('\n');
	}
}
