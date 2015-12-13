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

NAME = ft_hexdump

S = main.c\
	error.c\
	ft_ft.c\
	ft_putchar.c\
	print_file.c

SRC = $(addprefix srcs/,$(S))

FLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	gcc $(FLAG) $(SRC) -I includes -o $(NAME)
clean :
	rm -f $(NAME)
re : clean all
