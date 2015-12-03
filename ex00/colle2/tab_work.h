/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_work.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 19:39:35 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/01 22:09:16 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAB_WORK_H
# define TAB_WORK_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include "colle_00/colle00.h"
# include "libft/ft.h"
# define SIZE_BUFF 1024

char	*re_alloc(char *main_str, char *buffer, int size);
char	*init_entry(void);
void	def_x_y(char *str, int *x, int *y);
int		ft_compare(int x, int y, char *entry, int *tab);
void	ft_init_tab(int *tab);
#endif
