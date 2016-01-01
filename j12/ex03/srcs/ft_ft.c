/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/30 16:59:04 by fjanoty          ###   ########.fr       */
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

int		ft_strcmp(t_ucc *str1, t_ucc *str2, int size_cmp)
{
	int	i;

	i = 0;
	while (i < (size_cmp - 1) && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

t_ucc	*ft_strdump(const t_ucc *src)
{
	t_ucc	*dest;
	int		i;

	i = 0;
	dest = (t_ucc*)malloc(sizeof(t_ucc) * SIZE_BUFF);
	while (i < SIZE_BUFF)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int		ft_putstr(t_ucc *str, int nb_char, int i)
{
	static	t_ucc	*prev = (t_ucc*)"";
	static	int		were_same = 0;

	if (ft_strcmp(str, prev, nb_char) == 0)
	{
		were_same = 1;
		ft_nb_char(nb_char);
		return (were_same);
	}
	if (((ft_strcmp(str, prev, nb_char) == 0 && nb_char != SIZE_BUFF))
		|| (ft_strcmp(str, prev, nb_char) != 0 && were_same))
	{
		write(1, "\n*", 2);
		were_same = 0;
	}
	while (i < nb_char)
		ft_putchar(str[i++]);
	while (i < SIZE_BUFF && ft_nb_char(0))
	{
		write(1, "    ", 3);
		i++;
	}
	prev = ft_strdump(str);
	return (were_same);
}
