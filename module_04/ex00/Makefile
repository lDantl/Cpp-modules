NAME			=	animal

CC				=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
CDEBUG			=	-fsanitize=adress -g

SRC				=	main.cpp		Animal.cpp			Cat.cpp		Dog.cpp \
					WrongCat.cpp	WrongAnimal.cpp

OBJ				=	$(SRC:.cpp=.o)
OBJ_DIR			=	./objs/
OBJS			=	$(addprefix $(OBJ_DIR), $(OBJ))

all				:	$(NAME)

$(NAME)			:	$(OBJS)
					$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)%.o	:	%.cpp
					@mkdir -p $(OBJ_DIR)
					$(CC) $(CFLAGS) -c $< -o $@

.PHONY			:	all fclean clean re

clean			:
				rm -rf $(OBJ_DIR)

fclean			:	clean
				rm -rf $(NAME)

re				:	fclean all