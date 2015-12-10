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

	i = 1;
	if (ac == 1)
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
	}	return (0);
}


// savoir combien d'octet serrons a lire avec arret du prgm si erreur	ok
// si plusieurs fichier : \n==> leur nom <==\n

// ac == 1		impossible pck "-c" sera dans les test					ok
// ac == 2		erreur => il manque des arguments						ok
// ac == 3		on test le nb puis on lis sur l'entre standar			ok
// ac >= 3		on lis les fichier										ok
