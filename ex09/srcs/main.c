/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 00:21:41 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/27 22:54:46 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

int		main(int ac, char **av)
{
	if (ac == 4)
		affichator(ft_atol(av[1]), ft_atol(av[3]), av[2]);
	return (0);
}

void	affichator(long a, long b, char *str)
{
	t_opp		tab_ope;
	t_operateur	f;
	int			i;

	i = what_operator(str, tab_ope);
	if (i == 3 && b == 0)
		ft_putstr("Stop : division by zero\n");
	else if (i == 4 && b == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		if (i == -1)
		{
			ft_putstr("0\n");
			return ;
		}
		f = tab_ope[i][1]; 
		ft_putnbr(f(a, b));
		ft_putchar('\n');
	}
}
