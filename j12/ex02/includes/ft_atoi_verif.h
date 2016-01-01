/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_verif.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 21:07:28 by fjanoty           #+#    #+#             */
/*   Updated: 2015/12/28 16:48:41 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ATOI_VERIF_H
# define FT_ATOI_VERIF_H

# define WRONG_NUMBER -1
# define AFTER_BEGENING 1
# define BEFOR_ENDING 2
# define SET_STATUS	1
# define SET_NUMBER	2
# define GET_STATUS	3
# define GET_NUMBER 4
# include "ft_ft.h"
# include "print_file.h"

int		get_set_nbchar(int action, int input);
void	ft_atoi_verif(char *str);
void	verrif_number(int *oct_lu);

#endif
