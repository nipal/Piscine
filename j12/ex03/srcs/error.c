/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/31 01:21:38 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"

static	void	print_tab_err_1(int nb)
{
	if (nb == 0)
		ft_puterror("Succes");
	if (nb == 1)
		ft_puterror("Operation not permitted");
	if (nb == 2)
		ft_puterror("No such file or directory");
	if (nb == 3)
		ft_puterror("No such process");
	if (nb == 4)
		ft_puterror("Interrupted system call");
	if (nb == 5)
		ft_puterror("I/O error");
	if (nb == 6)
		ft_puterror("No such device or address");
	if (nb == 7)
		ft_puterror("Argument list too long");
	if (nb == 8)
		ft_puterror("Exec format error");
	if (nb == 9)
		ft_puterror("Bad file number");
	if (nb == 10)
		ft_puterror("No child processes");
	if (nb == 11)
		ft_puterror("Try again");
}

static	void	print_tab_err_2(int nb)
{
	if (nb == 12)
		ft_puterror("Out of memory");
	if (nb == 13)
		ft_puterror("Permission denied");
	if (nb == 14)
		ft_puterror("Bad address");
	if (nb == 15)
		ft_puterror("Block device required");
	if (nb == 16)
		ft_puterror("Device or resource busy");
	if (nb == 17)
		ft_puterror("File exists");
	if (nb == 18)
		ft_puterror("Cross-device link");
	if (nb == 19)
		ft_puterror("No such device");
	if (nb == 20)
		ft_puterror("Not a directory");
	if (nb == 21)
		ft_puterror("Is a directory");
	if (nb == 22)
		ft_puterror("Invalid argument");
	if (nb == 23)
		ft_puterror("File table overflow");
}

static	void	print_tab_err_3(int nb)
{
	if (nb == 24)
		ft_puterror("Too many open files");
	if (nb == 25)
		ft_puterror("Not a typewriter");
	if (nb == 26)
		ft_puterror("Text file busy");
	if (nb == 27)
		ft_puterror("File too large");
	if (nb == 28)
		ft_puterror("No space left on device");
	if (nb == 29)
		ft_puterror("Illegal seek");
	if (nb == 30)
		ft_puterror("Read-only file system");
	if (nb == 31)
		ft_puterror("Too many links");
	if (nb == 32)
		ft_puterror("Broken pipe");
	if (nb == 33)
		ft_puterror("Math argument out of domain of func");
	if (nb == 34)
		ft_puterror("Math result not representable");
	if (nb == 35)
		ft_puterror("Bad file descriptor");
}

int				has_printed(void)
{
	static	int	printed = 0;

	if (!printed)
	{
		printed = 1;
		return (0);
	}
	else
		return (1);
}

void			print_tab_err(char *name_prg, char *name_file, int nb)
{
	if (has_printed())
		write(2, "\n", 1);
	(void)name_prg;
	write(2, "hexdump: ", 9);
	if (name_file != 0)
	{
		write(2, name_file, ft_strlen(name_file));
		write(2, ": ", 2);
	}
	print_tab_err_1(nb);
	print_tab_err_2(nb);
	print_tab_err_3(nb);
}
