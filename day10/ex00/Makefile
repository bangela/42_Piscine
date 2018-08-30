# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bangela <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 15:54:07 by bangela           #+#    #+#              #
#    Updated: 2018/08/21 22:39:20 by bangela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs

INCLUDES = ./includes

FLAG = -Wall -Wextra -Werror

FILES = $(SRC)/ft_putchar.c $(SRC)/ft_putstr.c $(SRC)/ft_strcmp.c 
$(SRC)/ft_strlen.c $(SRC)/ft_swap.c

all: $(NAME)

$(NAME):
	gcc -c -I $(INCLUDES)/*.h $(FLAG) $(FILES)
	ar rc $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all
