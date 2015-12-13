/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/03 23:04:44 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

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

int		ft_strcmp(ucc *str1, ucc *str2, int size_cmp)
{
	int	i;

	i = 0;
	while (i < (size_cmp - 1) && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

ucc	*ft_strdump(const ucc *src)
{
	ucc	*dest;
	int	i;

	i = 0;
	dest = (ucc*)malloc(sizeof(ucc) * SIZE_BUFF);
	while (i < SIZE_BUFF)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void	ft_putstr(ucc *str, int nb_char)
{
	static	ucc	*prev = (ucc*)"";
	static	int	were_same = 0;;
	int			i;

	i = 0;
	if (ft_strcmp(str, prev, nb_char) == 0)
	{
		were_same = 1;
		ft_nb_char(nb_char);
		return ;
	}
	if (((ft_strcmp(str, prev, nb_char) == 0 && nb_char != SIZE_BUFF))
		|| (ft_strcmp(str, prev, nb_char) != 0 && were_same) )
	{
		write(1, "\n*", 2);
		were_same = 0;
	}
	while (i < nb_char)
	{
		ft_putchar(str[i]);
		i++;
	}
	while (i < SIZE_BUFF)
	{
		write(1, "    ", 4);
		i++;
	}
	prev = ft_strdump(str);
}
//	addapter un ft_putchar
//		(7 case) numerot ligne en hexa si %16
//		(4 case) imprimer le caracter avec asser d'espace

//	traduir la valeur d'un character
//	

//	Regarder si la nouvelle chaine n'est pas identique a l'ancienne

