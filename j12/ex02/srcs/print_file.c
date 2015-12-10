/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/03 23:04:44 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_file.h"

int		init_var(char **buff1, char **buff2, int *oct_lu, int nb_char)
{
	int	i;

	i = 0;
	*oct_lu = 1;
	if (nb_char == INFINIT_NUMBER)
		nb_char = SIZE_BUFF;
	*buff1 = (char*)malloc(sizeof(char) * nb_char + 1);
	*buff2 = (char*)malloc(sizeof(char) * nb_char + 1);
	if (!buff1 || !buff2)
		return (0);
	while (i < nb_char)
	{
		buff2[0][i] = '\0';
		i++;
	}
	return (1);
}

void	close_var(char *buff_actif, char *buff_temp, int oct_lu, int nb_char)
{
	if (nb_char != INFINIT_NUMBER)
	{
		ft_putstr(buff_temp + oct_lu);
		ft_putstr(buff_actif);
	}
	free(buff_actif);
	free(buff_temp);
}

void	ft_print_file(int fd, int nb_char)
{
	int		oct_lu;
	char	*buff_actif;
	char	*buff_temp;

	if (!init_var(&buff_actif, &buff_temp, &oct_lu, nb_char))
		return;
	oct_lu = nb_char;
	while (oct_lu == nb_char)
	{
		ft_swap_str(&buff_temp, &buff_actif);
		oct_lu = read(fd, buff_actif, (unsigned int)nb_char);
		buff_actif[oct_lu] = '\0';
		if (nb_char == INFINIT_NUMBER)
			ft_putstr(buff_actif);
	}
	close_var(buff_actif, buff_temp, oct_lu, nb_char);
}


// atoi : ou renvoie une erreur (si le nombre est invalide || infini )	ok
// buff actif + temporaire de la taille de ce qu'il y a a lire			ok

// on deroule tout le pregrame sans rien afficher						ok
// on affiche le bout du temporaire qui va bien + le actif				ok
// si le buffer > fichier le buffer_temp n'affiche rien					ok
