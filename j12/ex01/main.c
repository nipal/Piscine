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

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_puterror(char *str)
{
	write(2, str, ft_strlen(str));
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_print_file(char *name)
{
	int		fd;
	int		oct_lu;
	char	buff[BUFFER + 1];

	fd = open(name, O_RDONLY, S_IREAD);
	if (fd == -1)
	{
		ft_puterror("No such file or directory\n");
		return;
	}
	oct_lu = 1;
	while (oct_lu)
	{
		oct_lu = read(fd, buff, BUFFER);
		buff[oct_lu] = '\0';
		ft_putstr(buff);
	}
	close(fd);
}

int		main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ac == 1)
			ft_puterror("File name missing.\n");
		else
 			ft_print_file(av[i]);
	 	i++;
	}
	if (ac == 1)
		ft_puterror("File name missing.\n");
	return (0);
}
