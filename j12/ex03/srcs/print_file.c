/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/31 16:09:08 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_file.h"
#include "error.h"
#include <stdio.h>

static int		put_buffer(int *oct_lu, int fd, t_ucc *buff_actif, int before)
{
	if (before)
		*oct_lu += read(fd, buff_actif + *oct_lu, SIZE_BUFF - *oct_lu);
	else
		*oct_lu = read(fd, buff_actif, SIZE_BUFF);
	if (errno == 21)
		return (1);
	if (*oct_lu == SIZE_BUFF && !ft_putstr(buff_actif, *oct_lu, 0)
			&& gbl_mode(GET, 0) == CHAR)
		ft_putstr2(buff_actif, *oct_lu);
	return (0);
}

static	void	raz(int *oct_lu)
{
	errno = 0;
	*oct_lu = 0;
}

void			ft_print_file(int fd, int last, char *file)
{
	static	int		oct_lu = SIZE_BUFF;
	static	t_ucc	buff_actif[SIZE_BUFF + 1];

	if (oct_lu < SIZE_BUFF && !last)
	{
		if (put_buffer(&oct_lu, fd, buff_actif, 1))
		{
			print_tab_err("hexdump :", file, errno);
			raz(&oct_lu);
		}
	}
	while (oct_lu == SIZE_BUFF && !last)
	{
		if (put_buffer(&oct_lu, fd, buff_actif, 0))
		{
			print_tab_err("hexdump :", file, errno);
			raz(&oct_lu);
		}
	}
	if (last)
	{
		if (!ft_putstr(buff_actif, oct_lu, 0) && gbl_mode(GET, 0) == CHAR)
			ft_putstr2(buff_actif, oct_lu);
	}
}
