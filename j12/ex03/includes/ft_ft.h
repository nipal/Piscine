/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/03 23:04:44 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_H
#define FT_FT_H

# include <errno.h>
# include <unistd.h>
# include <stdlib.h>
# include "print_file.h"

typedef	unsigned	char	ucc;
void	ft_putchar(ucc c);
int		ft_strlen(char *str);
void	ft_puterror(char *str);
void	ft_putstr(ucc *str, int nb_char);
void	ft_put_line_number(int	last);
int		ft_strcmp(ucc *str1, ucc *str2, int size_cmp);
ucc		*ft_strdump(ucc *src);
int		ft_nb_char(int incr);
#endif
