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

int	main(int ac, char **av)
{
	int		i;
	int		fd;

	i = 2;
	if (ac == 1)
		ft_puterror("missing operand\n");
	if (ac == 2)
 		ft_print_file(0);
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY, S_IREAD);
		if (errno)
			print_tab_err(errno);
		else
		{
			ft_print_file(fd);
			close(fd);
		}
		i++;
	}
	return (0);
}

// ac == 1		pas d'option => missing operand -c
// ac == 2		on lis sur l'entrer standar								ok
// ac >= 2		on lis le/les fichier									ok
