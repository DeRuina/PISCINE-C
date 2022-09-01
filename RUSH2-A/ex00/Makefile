# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: druina <druina@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 13:37:25 by akuzmenk          #+#    #+#              #
#    Updated: 2022/08/27 17:15:29 by druina           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME0 = rush-00
NAME1 = rush-01
NAME2 = rush-02
NAME3 = rush-03
NAME4 = rush-04
NAME5 = rush-2

SRC = ft_*.c 
FLAGS = -Wall -Wextra -Werror

all : $(NAME0) $(NAME1) $(NAME2) $(NAME3) $(NAME4) $(NAME5)


$(NAME0):
	gcc $(FLAGS) -o $(NAME0) $(SRC) main.c rush00.c
$(NAME1):
	gcc $(FLAGS) -o $(NAME1) $(SRC) main.c rush01.c
$(NAME2):
	gcc $(FLAGS) -o $(NAME2) $(SRC) main.c rush02.c
$(NAME3):
	gcc $(FLAGS) -o $(NAME3) $(SRC) main.c rush03.c
$(NAME4):
	gcc $(FLAGS) -o $(NAME4) $(SRC) main.c rush04.c
$(NAME5):
	gcc $(FLAGS) -o $(NAME5) $(SRC) rush-2.c
fclean:
	rm -f $(NAME0) $(NAME1) $(NAME2) $(NAME3) $(NAME4) $(NAME5)
re: fclean all