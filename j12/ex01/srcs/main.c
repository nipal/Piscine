/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/28 16:43:00 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int ac, char **av)
{
	int		i;
	int		fd;

	i = 1;
	if (ac == 1)
		ft_print_file(0);
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY, S_IREAD);
		if (fd == -1)
			print_tab_err(av[0], av[i], errno);
		else
		{
			ft_print_file(fd);
			close(fd);
		}
		i++;
	}
	return (0);
}
