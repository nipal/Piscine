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

NAME = ft_tail

S = main.c\
	error.c\
	ft_atoi_verif.c
	ft_ft\
	print_file.c

SRC = $(addprefix srcs/,$(S))

all : $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror $(SRC) -I includes -o $(NAME)
clean :
	rm -f $(NAME)
re : clean all
