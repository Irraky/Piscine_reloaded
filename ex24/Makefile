# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drecours <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 01:05:52 by drecours          #+#    #+#              #
#    Updated: 2016/11/12 17:52:59 by drecours         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	  srcs/ft_swap.c

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

clean:
	/bin/rm -rf ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
