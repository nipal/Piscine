/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/17 16:23:39 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/01 19:12:30 by jmunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	right_char00(int i, int j, int x, int y)
{
	if (i == 1 && j == 1)
		return ('o');
	else if (i == x && j == 1)
		return ('o');
	else if (i == 1 && j == y)
		return ('o');
	else if (i == x && j == y)
		return ('o');
	else if (i == 1 || i == x)
		return ('|');
	else if (j == 1 || j == y)
		return ('-');
	else
		return (' ');
}

char	*colle00(int x, int y, char *str)
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
			str[(x + 1) * (j - 1) + i - 1] = right_char00(i, j, x, y);
			i++;
		}
		str[(x + 1) * (j - 1) + i - 1] = ('\n');
		j++;
	}
	str[(x + 1) * (j - 1) + i - 1] = ('\0');
	return (str);
}
