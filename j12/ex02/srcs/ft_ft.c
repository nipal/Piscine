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

void	ft_swap_str(unsigned char **str1, unsigned char **str2)
{
	unsigned	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

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

char	*ft_strdump(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char*)malloc((sizeof(char) + 1) * ft_strlen(str));
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
