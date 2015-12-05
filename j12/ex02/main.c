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
	int	i;
	int nb_char;
	int	fd;

	if (ac <= 2)
	{
		ft_puterror("option requires an argument -- \'c\'\n");
		return (1);
	}
	nb_char = ft_atoi_verif(av[2])
	if (nb == WRONG_NUMBER)
	{
		ft_puterror("invalid number of bytes\n");
		return (1);
	}
	if (ac == 3)
 		ft_print_file(fd, nb_char);
	i = 3;
	while (i < ac)
	{
 		ft_print_file(fd, nb_char);
		i++;
	}
	return (0);
}

	*fd = open(name, O_RDONLY, S_IREAD);
	if (fd == -1)
	{
		ft_puterror("No such file or directory\n");
		return (0);
	}
	close(fd);



// verifier que les parametre sont ok (donc juste si il y a un -c en av[1])	
// savoir combien d'octet serrons a lire avec arret du prgm si erreur
// si plusieurs fichier : \n==> leur nom <==\n

// ac == 1		impossible pck "-c" sera dans les test				ok
// ac == 2		erreur => il manque des arguments					ok
// ac == 3		on test le nb puis on lis sur l'entre standar		ok
// ac >= 3		on lis les fichier									ok
