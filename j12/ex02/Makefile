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
	gcc $(FLAG) $(SRC) $(INCL) -o $(NAME)
clean :
	rm -f $(NAME)
re : clean all
