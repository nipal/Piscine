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
#define	BUFFER 10

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

void	ft_putstr(unsigned char *str, int nb_char)
{
	write(1, str, nb_char);
}

void	ft_print_file(char *name)
{
	int					fd;
	int					oct_lu;
	unsigned	char	buff[BUFFER];

	fd = open(name, O_RDONLY, S_IREAD);
	oct_lu = BUFFER;
	while (oct_lu == BUFFER)
	{
		oct_lu = read(fd, buff, BUFFER);
		ft_putstr(buff, oct_lu);
	}
	close(fd);
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
