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

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define	BUFFER 100

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
	oct_lu = 1;
	while (oct_lu)
	{
		oct_lu = read(fd, buff, BUFFER);
		buff[oct_lu] = '\0';
		ft_putstr(buff);
	}
}

int		main(int ac, char **av)
{
	if (ac == 1)
		ft_puterror("File name missing.\n");
	else if (ac > 2)
		ft_puterror("Too many arguments.\n");
	else
		ft_print_file(av[1]);
	return (0);
}
