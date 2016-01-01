/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/28 15:33:04 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_file.h"

void	ft_print_file(int fd)
{
	int					oct_lu;
	unsigned	char	buff_actif[SIZE_BUFF];

	oct_lu = SIZE_BUFF;
	while (oct_lu == SIZE_BUFF)
	{
		oct_lu = read(fd, buff_actif, SIZE_BUFF);
		ft_putstr(buff_actif, oct_lu);
	}
}
