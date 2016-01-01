/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/31 15:45:43 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static	int		ft_strcmp1(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] == str2[i] && str1[i])
		i++;
	return (str1[i] - str2[i]);
}

static	void	end(char **av, int i, int ok, int ac)
{
	if ((ac == 2 && ft_strcmp1(av[1], "-C") == 0) || ac == 1)
		ok = 0;
	if (ok)
	{
		print_tab_err("hexdump :", av[i - 1], 35);
		write(1, "\n", 1);
	}
	else
	{
		ft_print_file(0, 1, "");
		ft_put_line_number(1);
	}
}

int				gbl_mode(int acces, int value)
{
	static	int	mode = 0;

	if (acces == SET)
		mode = value;
	else if (acces == GET)
		return (mode);
	return (-1);
}

int				main(int ac, char **av)
{
	int		fd;
	int		i;
	int		ok;

	i = 1;
	ok = 1;
	gbl_mode(SET, HEX);
	if (ac >= 2 && ft_strcmp1(av[1], "-C") == 0 && ++i)
		gbl_mode(SET, CHAR);
	if (i == ac)
		ft_print_file(0, 0, "");
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY, S_IREAD);
		if (fd == -1)
			print_tab_err("hexdump :", av[i], errno);
		else
		{
			ft_print_file(fd, 0, av[i]);
			ok = 0;
		}
		i++;
	}
	end(av, i, ok, ac);
	return (0);
}
