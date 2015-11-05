/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 13:13:20 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/05 13:17:00 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		min(char **tab, int size, int, int(*cmp)(char *, char *)j)
{
	int		i;
	char	*min;

	i = j;
	min = tab[j];
	while (i < size)
	{
		if (cmp(tab[i], min) < 0)
		{
			j = i;
			min = tab[i];
		}
		i++;
	}
	return (j);
}

void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	if (tab)
	{
		while (tab[i])
		{
			j = min(tab, size, i, cmp);
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
			i++;
		}
	}

}
