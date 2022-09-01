# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: druina <druina@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 11:02:32 by druina            #+#    #+#              #
#    Updated: 2022/08/23 15:08:57 by druina           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strcmp.c 

OBJET = ft_putchar.o ft_strlen.o ft_swap.o ft_putstr.o ft_strcmp.o 

HEADER = includes/*.h

all:	$(NAME)

$(NAME): $(SRC)
	gcc -Wextra -Wall -Werror -c $(SRC) $(HEADER)
	ar rc $(NAME) $(OBJET)

 clean: 
	/bin/rm -f $(OBJET) 

fclean:	clean 
	/bin/rm -f $(NAME)

re: fclean all 
