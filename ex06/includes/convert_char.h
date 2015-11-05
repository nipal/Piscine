/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_char.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 07:52:07 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/05 05:14:08 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_CHAR_H
# define CONVERT_CHAR_H

#include <stdlib.h>
#include "func.h"
#include "ft_put.h"

typedef	long	(*operateur)(long, long);
operateur		init_operator(int nb_ope);
long			ft_atol(char *str);
int			what_operator(char *str);
#endif
