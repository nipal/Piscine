/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_verif.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/10/21 14:17:21 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi_verif.h"

static	int	is_infit(char *str)
{
	char	c1;
	char	c2;

	if (!str[0])
		return (0);
	c1 = str[0];
	c2 = str[1];
	if (c1 == '+' && c2 >= '0' && c2 <= '9')
		return (1);
	if ((c1 == 'm' || c1 == 'b' || c1 == 'k' || c1 == 'K' || c1 == 'M') && !c2)
		return (1);
	return (0);
}

int			ft_atoi_verif(char *str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	if (*str[i] == '-')
		i++;
	while ((c >= 9 && c <= 13) || c == 32)
		i++;
	if (*str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	if (str[i])
		return (WRONG_NUMBER);
	if (is_infinit(str))
		return (INFINIT_NUMBER);
	return (nbr);
}

// si le premier est un '-'		 	=>	comme si positif donc on passe		ok
// si espace on les sautes													ok
// si '+' on le saute  ('-') la c'est plus possible							ok
// tant qu'on a des chiffre on fait comme d'ab								ok
// si le dernier caracter n'est pas un '\0' alors on a une erreur de nombre	ok
// si le premier est un '+[0-9]'	=>	on lit depuis le debut				ok
// si le premier est un [mbk]		=>	on lit depuis le bedut				ok
// reponse -1 = "nombre invalide"  -2 = "on lit beouis le bebut"			ok
