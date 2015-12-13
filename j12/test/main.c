/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/03 23:04:44 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	print_all_signed(char *str)
{
	int		i;
	int		fd;
	char	c;

	fd = open(str, O_WRONLY | O_RDONLY, S_IWRITE | S_IREAD);
	c = 0;
	i = 0;
	while (i < 1000)
	{
		c++;
		write(fd, &c, 1);
		if (i % 10 == 0)
			write(1, "\n", 1);
		write(1, "|", 1);
		write(1, &c, 1);
		write(1, "|", 1);
		write(1, " ", 1);
		i++;
	}
	close(fd);
}

void	print_all_unsigned(char *str)
{
	int					i;
	int					fd;
	unsigned	char	c;

	fd = open(str, O_WRONLY | O_RDONLY, S_IWRITE | S_IREAD);
	i = 0;
	c = 0;
	while (i < 256)
	{
		c++;
		write(fd, &c, 1);
		i++;
	}
	close(fd);
}
void	print_null(char *file)
{
	int		i;
	int		fd;

	fd = open(file, O_WRONLY | O_RDONLY, S_IWRITE | S_IREAD);
	i = 0;
	while (i < 1000000)
	{
		write(fd, "\0", 1);
		i++;
	}
	close(fd);
}

int	main(int ac, char **av)
{
	int		fd;
	int		i;
	char	c;

	i = -256;
	c = 0;
	if (ac > 1)
		print_all_signed(av[1]);
	if (ac > 2)
		print_all_unsigned(av[2]);
	return (0);
}

	/*
		fd = open(av[1], O_WRONLY | O_RDONLY, S_IWRITE | S_IREAD);
		printf("code erreur :%d\n", errno);
		write(fd, "oui", 4);
		printf("code erreur :%d\n", errno);
		close(fd);
	*/

