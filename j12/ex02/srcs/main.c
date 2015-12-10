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

void	ft_manage_print(int ac, char **av, int nb_char, char **tab_error)
{
	int		i;
	int		fd;

	i = 2;
	if (ac == 3)
 		ft_print_file(0, nb_char);
	while (++i < ac)
	{
		fd = open(av[i], O_RDONLY, S_IREAD);
		if (errno)
			ft_puterror(tab_error[errno]);
		else
		{
			if (ac > 4)
			{
				if (i == 4)
					ft_putstr("\n");
				ft_putstr("==> ");
				ft_putstr(av[i]);
				ft_putstr(" <==\n");
			}
			ft_print_file(fd, nb_char);
			close(fd);
		}
	}
}

int	main(int ac, char **av)
{
	int 	 nb_char;
	char	**tab_error;

	if (ac <= 2)
	{
		ft_puterror("option requires an argument -- \'c\'\n");
		return (1);
	}
	nb_char = ft_atoi_verif(av[2]);
	if (nb_char == WRONG_NUMBER)
	{
		ft_puterror("invalid number of bytes\n");
		return (1);
	}
	tab_error = init_tab_err();
	ft_manage_print(ac, av, nb_char, tab_error);
	free_tab_err(tab_error);
	return (0);
}


// savoir combien d'octet serrons a lire avec arret du prgm si erreur	ok
// si plusieurs fichier : \n==> leur nom <==\n

// ac == 1		impossible pck "-c" sera dans les test					ok
// ac == 2		erreur => il manque des arguments						ok
// ac == 3		on test le nb puis on lis sur l'entre standar			ok
// ac >= 3		on lis les fichier										ok
