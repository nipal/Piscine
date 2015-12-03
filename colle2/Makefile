# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjanoty <fjanoty@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/01 21:04:06 by fjanoty           #+#    #+#              #
#    Updated: 2015/11/01 22:18:22 by fjanoty          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = main.c tab_work.c ft_print_result.c

SRC1 = libft/ft_putchar.c libft/ft_strlen.c libft/ft_strcmp.c libft/ft_putstr.c libft/ft_putnbr.c

SRC2 = colle_00/colle00.c colle_00/colle01.c colle_00/colle02.c colle_00/colle03.c colle_00/colle04.c

all: $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror $(SRC) $(SRC1) $(SRC2) -o $(NAME)

fclean:
	rm -f $(NAME)
