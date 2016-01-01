# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/03 22:11:07 by fjanoty           #+#    #+#              #
#    Updated: 2015/12/29 22:00:47 by fjanoty          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
.PHONY: all, clean, fclean, re

.SUFFIXES:

NAME = ft_hexdump

S = main.c\
	error.c\
	ft_ft.c\
	ft_putchar.c\
	print_file.c\
	ft_put_line_number.c

SRC = $(addprefix srcs/,$(S))

FLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	gcc $(FLAG) $(SRC) -I includes -o $(NAME)
clean :
	rm -f nothing
fclean : clean
	rm -f $(NAME)

re : fclean all
