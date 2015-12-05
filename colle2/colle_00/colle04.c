/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/17 16:23:39 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/01 19:11:24 by jmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	right_char04(int i, int j, int x, int y)
{
	if (i == 1 && j == 1)
		return ('A');
	else if (i == x && j == 1)
		return ('C');
	else if (i == 1 && j == y)
		return ('C');
	else if (i == x && j == y)
		return ('A');
	else if (i == 1 || i == x)
		return ('B');
	else if (j == 1 || j == y)
		return ('B');
	else
		return (' ');
}

char	*colle04(int x, int y, char *str)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j <= y && x > 0)
	{
		i = 1;
		while (i <= x)
		{
			str[(x + 1) * (j - 1) + i - 1] = right_char04(i, j, x, y);
			i++;
		}
		str[(x + 1) * (j - 1) + i - 1] = ('\n');
		j++;
	}
	str[(x + 1) * (j - 1) + i - 1] = ('\0');
	return (str);
}
