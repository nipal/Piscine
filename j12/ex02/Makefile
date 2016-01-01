# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/03 22:11:07 by fjanoty           #+#    #+#              #
#    Updated: 2015/12/28 20:55:43 by fjanoty          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
.PHONY: all, clean, fclean, re

.SUFFIXES:

NAME = ft_tail

S = main.c\
	error.c\
	ft_atoi_verif.c\
	ft_ft.c\
	print_file.c

H = $(S:.c=.h)

SRC = $(addprefix srcs/,$(S))

HEAD = $(addprefix includes/,$(O))

FLAG = -Wall -Wextra -Werror

INCL = $(addprefix srcs/,$(H))

all : $(NAME)

$(NAME) :
	gcc $(FLAG) $(SRC) -I includes -o $(NAME)
clean :
	rm -f nothing
fclean : clean
	rm -f $(NAME)

re : fclean all
