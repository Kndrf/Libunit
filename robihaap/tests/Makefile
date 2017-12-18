# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/11/23 13:52:57 by dguelpa      #+#   ##    ##    #+#        #
#    Updated: 2017/12/03 15:47:00 by dguelpa     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: fclean clean re all

NAME = test
SRC = main.c ./strlen/00_strlen_test_launcher.c ./strlen/01_basic_test_ok.c \
	  ./strlen/02_basic_test2_ko.c ./strlen/03_segv.c ./strlen/04_buse.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) $(SRC) -L. libft.a -L. libunit.a -o $(NAME)

%.o: %.c
	gcc $(FLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
