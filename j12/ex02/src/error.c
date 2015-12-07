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

void			free_tab_err(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static	void	init_tab_err_1(char **tab)
{
	tab[0] = ft_strdump("Succes");
	tab[1] = ft_strdump("Operation not permitted");
	tab[2] = ft_strdump("No such file or directory");
	tab[3] = ft_strdump("No such process");
	tab[4] = ft_strdump("Interrupted system call");
	tab[5] = ft_strdump("I/O error");
	tab[6] = ft_strdump("No such device or address");
	tab[7] = ft_strdump("Argument list too long");
	tab[8] = ft_strdump("Exec format error");
	tab[9] = ft_strdump("Bad file number");
	tab[10] = ft_strdump("No child processes");
	tab[11] = ft_strdump("Try again");
	tab[12] = ft_strdump("Out of memory");
	tab[13] = ft_strdump("Permission denied");
	tab[14] = ft_strdump("Bad address");
	tab[15] = ft_strdump("Block device required");
	tab[16] = ft_strdump("Device or resource busy");
	tab[17] = ft_strdump("File exists");
	tab[18] = ft_strdump("Cross-device link");
	tab[19] = ft_strdump("No such device");
	tab[20] = ft_strdump("Not a directory");
	tab[21] = ft_strdump("Is a directory");
	tab[22] = ft_strdump("Invalid argument");
	tab[23] = ft_strdump("File table overflow");
	tab[24] = ft_strdump("Too many open files");
}
static	void	init_tab_err_2(char **tab)
{
	tab[25] = ft_strdump("Not a typewriter");
	tab[26] = ft_strdump("Text file busy");
	tab[27] = ft_strdump("File too large");
	tab[28] = ft_strdump("No space left on device");
	tab[29] = ft_strdump("Illegal seek");
	tab[30] = ft_strdump("Read-only file system");
	tab[31] = ft_strdump("Too many links");
	tab[32] = ft_strdump("Broken pipe");
	tab[33] = ft_strdump("Math argument out of domain of func");
	tab[34] = ft_strdump("Math result not representable");
	tab[35] = NULL;
}

char			**init_tab_err()
{
	char	**tab_err;
	
	tab_err = (char**)malloc((sizeof(char*) + 1) * 35);
	init_tab_err_1(tab_err);
	init_tab_err_1(tab_err);
	return (tab_err);
}
