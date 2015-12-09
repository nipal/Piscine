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

#ifndef PRINT_FILE_H
#define PRINT_FILE_H

# include <errno.h>
# include <unistd.h>
# define	BUFFER 100

char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
void	ft_puterror(char *str);
void	ft_putstr(char *str);
char	*ft_strdump(const char *str)

#endif
