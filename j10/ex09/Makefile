# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/03 22:11:07 by fjanoty           #+#    #+#              #
#    Updated: 2015/11/27 23:05:19 by fjanoty          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
.PHONY: all, clean, fclean, re

.SUFFIXES:

NAME = do-op

H = includes

S = main.c\
	ft_put.c\
	func.c\
	convert_char.c
	ft_usgae.c\
	ft_strcmp.c

SRC = $(addprefix srcs/,$(S))

all :
	gcc -Wall -Wextra -Werror $(SRC) -I $(H) -o $(NAME)

clean :
	rm -f $(NAME)
re : clean all
