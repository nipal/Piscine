/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 22:45:56 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/30 20:19:32 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_H
# define FT_FT_H

# include <errno.h>
# include <unistd.h>
# include <stdlib.h>
# include "print_file.h"
# define GET 1
# define SET 2
# define HEX 1
# define CHAR 2

typedef	unsigned	char	t_ucc;
void	ft_putchar(t_ucc c);
int		ft_strlen(char *str);
void	ft_puterror(char *str);
int		ft_putstr(t_ucc *str, int nb_char, int i);
void	ft_put_line_number(int	last);
int		ft_strcmp(t_ucc *str1, t_ucc *str2, int size_cmp);
t_ucc	*ft_strdump(const t_ucc *src);
int		gbl_mode(int acces, int value);
int		ft_nb_char(int incr);
int		pow_16(int pow);
void	ft_putstr2(t_ucc *str, int nb_char);
int		has_printed();
#endif
