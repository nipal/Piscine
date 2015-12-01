/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 00:06:11 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/27 18:45:31 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	croissant(int *tab, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (tab[i] && tab[i + 1])
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	decroissant(int *tab, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (tab[i] && tab[i + 1])
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_is_sort(int *tab, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (tab[i] && tab[i + 1] && f(tab[i, i + 1]) == 0)
		i++;
	if (tab[i] && tab[i + 1])
	{
		if (f(tab[length, length - 1]) < 0)
			return (croissant(tab + i, f));
		else (f(tab[length, length - 1]) > 0)
			return (decroissant(tab + i, f));
	}
	return (1);
}
