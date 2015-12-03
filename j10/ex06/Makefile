# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/03 22:11:07 by fjanoty           #+#    #+#              #
#    Updated: 2015/11/27 19:51:08 by fjanoty          ###   ########.fr        #
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

O = $(S:.c=.o)

SRC = $(addprefix srcs/,$(S))

all : $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror $(SRC) -I $(H) -o $(NAME)
clean :
	rm -f $(NAME)
re : clean all
