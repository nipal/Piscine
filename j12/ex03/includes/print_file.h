/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_file.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/31 14:59:22 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_FILE_H
# define PRINT_FILE_H

# include <errno.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include "ft_ft.h"
# include "error.h"
# define SIZE_BUFF 16

void	ft_print_file(int fd, int last, char *file);

#endif
