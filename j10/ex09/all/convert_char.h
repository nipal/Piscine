/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_char.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 07:52:07 by fjanoty           #+#    #+#             */
/*   Updated: 2015/11/27 22:53:31 by fjanoty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_CHAR_H
# define CONVERT_CHAR_H

# include <stdlib.h>
# include "func.h"
# include "ft_put.h"
# include "ft_opp.h"
# include "ft_strcmp.h"

typedef	long	(*t_ope)(long, long);
typedef	struct	s_opp
{
	char	*str;
	t_ope	*opp;
}			t_opp;
long			ft_atol(char *str);
int				what_operator(char *str);
#endif
