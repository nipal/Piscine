/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/03 23:04:44 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"

static	void	print_tab_err_1(int nb)
{
	if (nb == 0)
		ft_puterror("Succes\n");
	if (nb == 1)
		ft_puterror("Operation not permitted\n");
	if (nb == 2)
		ft_puterror("No such file or directory\n");
	if (nb == 3)
		ft_puterror("No such process\n");
	if (nb == 4)
		ft_puterror("Interrupted system call\n");
	if (nb == 5)
		ft_puterror("I/O error\n");
	if (nb == 6)
		ft_puterror("No such device or address\n");
	if (nb == 7)
		ft_puterror("Argument list too long\n");
	if (nb == 8)
		ft_puterror("Exec format error\n");
	if (nb == 9)
		ft_puterror("Bad file number\n");
	if (nb == 10)
		ft_puterror("No child processes\n");
	if (nb == 11)
		ft_puterror("Try again\n");
}

static	void	print_tab_err_2(int nb)
{
	if (nb == 12)
		ft_puterror("Out of memory\n");
	if (nb == 13)
		ft_puterror("Permission denied\n");
	if (nb == 14)
		ft_puterror("Bad address\n");
	if (nb == 15)
		ft_puterror("Block device required\n");
	if (nb == 16)
		ft_puterror("Device or resource busy\n");
	if (nb == 17)
		ft_puterror("File exists\n");
	if (nb == 18)
		ft_puterror("Cross-device link\n");
	if (nb == 19)
		ft_puterror("No such device\n");
	if (nb == 20)
		ft_puterror("Not a directory\n");
	if (nb == 21)
		ft_puterror("Is a directory\n");
	if (nb == 22)
		ft_puterror("Invalid argument\n");
	if (nb == 23)
		ft_puterror("File table overflow\n");
}
static	void	print_tab_err_3(int nb)
{
	if (nb == 24)
		ft_puterror("Too many open files\n");
	if (nb == 25)
		ft_puterror("Not a typewriter\n");
	if (nb == 26)
		ft_puterror("Text file busy\n");
	if (nb == 27)
		ft_puterror("File too large\n");
	if (nb == 28)
		ft_puterror("No space left on device\n");
	if (nb == 29)
		ft_puterror("Illegal seek\n");
	if (nb == 30)
		ft_puterror("Read-only file system\n");
	if (nb == 31)
		ft_puterror("Too many links\n");
	if (nb == 32)
		ft_puterror("Broken pipe\n");
	if (nb == 33)
		ft_puterror("Math argument out of domain of func\n");
	if (nb == 34)
		ft_puterror("Math result not representable\n");
}

void			print_tab_err(int nb)
{
	print_tab_err_1(nb);
	print_tab_err_2(nb);
	print_tab_err_3(nb);
}
