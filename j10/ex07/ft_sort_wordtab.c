/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 07:17:45 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/05 13:16:56 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

int		min(char **tab, int j)
{
	int		i;
	char	*min;

	i = j;
	min = tab[j];
	while (tab[i]:w)
	{
		if (ft_strcmp(tab[i], min) < 0)
		{
			j = i;
			min = tab[i];
		}
		i++;
	}
	return (j);
}

void	ft_sort_wordtab(char **tab)
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
			j = min(tab, size, i);
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
			i++;
		}
	}
}
