/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_file.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/03 23:04:44 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_FILE_H
#define PRINT_FILE_H

# include <errno.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "ft_ft.h"
# include "ft_atoi_verif.h"
# define SIZE_BUFF 1000

static	int		init_var(char **buff1, char **buff2, int *oct_lu, int nb_char);
void			ft_print_file(int fd, int nb_char);
static	void	close_var(char *buff_actif, char *buff_temp, int oct_lu, int nb_var);

#endif