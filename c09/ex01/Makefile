# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egrevess <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 11:13:49 by egrevess          #+#    #+#              #
#    Updated: 2022/09/27 16:18:38 by egrevess         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c 

OBJECT = $(SRCS:.c=.o)

HEAD = includes/

CC = gcc

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJECT)
		ar -rc $(NAME) $(OBJECT)

.c.o:
		$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

all: $(NAME)

clean:
		rm -f $(OBJECT)

fclean: clean
		rm -f $(NAME)

re: 	fclean $(NAME)

.PHONY: all clean fclean re
