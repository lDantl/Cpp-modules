NAME			=	ex00

CXX				=	c++
CPPFLAGS		=	-Wall -Wextra -Werror -std=c++98 
CDEBUG			=	-fsanitize=adress -g

SRC				=	main.cpp

OBJ				=	$(SRC:.cpp=.o)
OBJ_DIR			=	./objs/
OBJS			=	$(addprefix $(OBJ_DIR), $(OBJ))

all				:	$(NAME)

$(NAME)			:	$(OBJS)
					$(CXX) $(CPPFLAGS) -o $@ $^

$(OBJ_DIR)%.o	:	%.cpp
					@mkdir -p $(OBJ_DIR)
					$(CXX) $(CPPFLAGS) -c $< -o $@

.PHONY			:	all fclean clean re

clean			:
				rm -rf $(OBJ_DIR)

fclean			:	clean
				rm -rf $(NAME)

re				:	fclean all