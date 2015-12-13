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

void	ft_putstr(char *str, int nb_char)
{
	int	i;

	i = 0;
	while (i < nb_char)
	{
		ft_putchar(str[i]);
		i++;
	}
}
//	addapter un ft_putchar
//		(7 case) numerot ligne en hexa si %16
//		(4 case) imprimer le caracter avec asser d'espace

//	traduir la valeur d'un character
//		
