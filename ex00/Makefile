# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/03 22:11:07 by fjanoty           #+#    #+#              #
#    Updated: 2015/11/04 10:26:28 by fjanoty          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
.PHONY: all, clean, fclean, re

.SUFFIXES:

NAME = libft.a

H = includes

S = ft_putchar.c \
	ft_putstr.c\
	ft_strcmp.c\
	ft_strlen.c\
	ft_swap.c

O = $(S:.c=.o)

SRC = $(addprefix srcs/,$(S))

all :
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(H)
	ar rc $(NAME) $(O)
	ranlib $(NAME)
clean : 
	rm  $(O)
fclean : clean
	rm $(NAME)
re : fclean all
