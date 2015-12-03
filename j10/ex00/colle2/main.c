/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 16:19:26 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/01 22:10:26 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(void)
{
	char	*entry;
	int		x;
	int		y;
	int		tab[5];

	ft_init_tab(tab);
	entry = init_entry();
	if (!entry)
	{
		ft_putstr("Alert! Memory is not sufficient to malloc !\n");
		return (EXIT_FAILURE);
	}
	def_x_y(entry, &x, &y);
	if (!ft_compare(x, y, entry, tab))
	{
		ft_putstr("Alert! Memory is not sufficient to malloc !\n");
		return (EXIT_FAILURE);
	}
	if (ft_print_result(tab, x, y))
		ft_putstr("aucune");
	ft_putchar('\n');
	free(entry);
	return (EXIT_SUCCESS);
}
