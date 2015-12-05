/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_work.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 19:38:47 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/01 22:12:49 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tab_work.h"

char	*re_alloc(char *main_str, char *buffer, int size)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char*)malloc(sizeof(char) * size);
	if (!str)
		return (0);
	while (main_str[i])
	{
		str[i] = main_str[i];
		i++;
	}
	while (buffer[j])
	{
		str[i + j] = buffer[j];
		j++;
	}
	str[i + j] = '\0';
	free(main_str);
	return (str);
}

char	*init_entry(void)
{
	int		again;
	char	*str;
	char	*buff;
	int		i;

	i = 1;
	str = (char*)malloc(sizeof(char));
	*str = '\0';
	buff = (char*)malloc(sizeof(char) * SIZE_BUFF + 1);
	if (!str || !buff)
		return (0);
	again = read(0, buff, SIZE_BUFF);
	while (again)
	{
		i++;
		str = re_alloc(str, buff, (SIZE_BUFF * i) + 1);
		if (!str)
			return (0);
		again = read(0, buff, SIZE_BUFF);
		buff[again] = '\0';
	}
	free(buff);
	return (str);
}

void	def_x_y(char *str, int *x, int *y)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	*x = i;
	*y = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			*y += 1;
		i++;
	}
}

int		ft_compare(int x, int y, char *entry, int *tab)
{
	char *str;

	str = (char*)malloc(sizeof(char) * (x * y + y + 1));
	if (!str)
		return (0);
	if (ft_strcmp(entry, colle00(x, y, str)) == 0)
		tab[0] = 1;
	if (ft_strcmp(entry, colle01(x, y, str)) == 0)
		tab[1] = 1;
	if (ft_strcmp(entry, colle02(x, y, str)) == 0)
		tab[2] = 1;
	if (ft_strcmp(entry, colle03(x, y, str)) == 0)
		tab[3] = 1;
	if (ft_strcmp(entry, colle04(x, y, str)) == 0)
		tab[4] = 1;
	return (1);
}

void	ft_init_tab(int *tab)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		tab[i] = 0;
		i++;
	}
}
