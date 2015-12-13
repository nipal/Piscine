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

void	ft_print_file(int fd)
{
	int		oct_lu;
	char	buff_actif[SIZE_BUFF + 1];

	oct_lu = SIZE_BUFF;
	while (oct_lu == SIZE_BUFF)
	{
		oct_lu = read(fd, buff_actif, SIZE_BUFF);
		buff_actif[oct_lu] = '\0';
		ft_putstr(buff_actif, oct_lu);
	}
}


// atoi : ou renvoie une erreur (si le nombre est invalide || infini )	ok
// buff actif + temporaire de la taille de ce qu'il y a a lire			ok

// on deroule tout le pregrame sans rien afficher						ok
// on affiche le bout du temporaire qui va bien + le actif				ok
// si le buffer > fichier le buffer_temp n'affiche rien					ok
