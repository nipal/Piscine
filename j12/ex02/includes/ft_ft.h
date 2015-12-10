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
# include "ft_atoi_verif.h"
# define	BUFFER 1000

int		ft_strlen(char *str);
void	ft_swap_str(char **str1, char **str2);
void	ft_puterror(char *str);
void	ft_putstr(char *str);
char	*ft_strdump(char *str);

#endif
