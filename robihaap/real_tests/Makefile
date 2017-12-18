# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: dguelpa <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/11/23 13:52:57 by dguelpa      #+#   ##    ##    #+#        #
#    Updated: 2017/12/03 16:41:40 by dguelpa     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: fclean clean re all

NAME = test
SRC = main.c ./strlen/00_strlen_launcher.c ./strlen/01_basic_test.c \
./strlen/02_basic_test2.c ./strlen/03_empty_string_test.c \
./strlen/04_complex_test.c ./atoi/00_atoi_launcher.c \
./atoi/01_basic_test.c ./atoi/02_letter_test_bef.c ./atoi/03_letter_test_aft.c \
./atoi/04_spaces_test_m.c ./atoi/05_spaces_test_p.c ./atoi/06_spaces_test_n.c \
./atoi/07_empty_test.c ./itoa/00_itoa_launcher.c ./itoa/01_basic_test.c \
./itoa/02_basic_test2.c ./itoa/03_negative_test.c ./itoa/04_zero_test.c \
./itoa/05_int_min_test.c ./itoa/06_int_max_test.c
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
