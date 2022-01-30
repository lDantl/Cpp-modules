# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdanica <rdanica@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/25 13:26:48 by rdanica           #+#    #+#              #
#    Updated: 2021/12/25 13:26:49 by rdanica          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megafone

CC		=	clang++
CFLAGS	=	-Wall -Wextra - Werror
CDEBUG	=	-fsanitize=adress -g -std=c++98

SRC		=	megafone.cpp
OBJ		=	$(SRC:.cpp=.o)

all		:	$(NAME)

$NAME	:	$(OBJ)
		$(CC) $(CFLAGS) -o $@ $^

.PHONY	:	all fclean clean re

clean	:
		rm -rf $(OBJ)

fclean	:	clean
		rm -rf $(NAME)

re		:	fclean all