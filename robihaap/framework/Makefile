# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dguelpa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 13:14:22 by dguelpa           #+#    #+#              #
#    Updated: 2017/12/03 16:26:54 by dguelpa     ###    #+. /#+    ###.fr      #
#                                                                              #
# **************************************************************************** #

.PHONY: fclean clean re all

NAME = libunit.a
HEADER = libunit.h
SRC = load_n_launch.c unicorn_printing.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ) $(HEADER)
	ranlib $(NAME)

%.o : %.c
	gcc -Wall -Werror -Wextra -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
