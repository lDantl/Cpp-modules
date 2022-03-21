NAME			=	form2

CXX				=	c++
CPPFLAGS		=	-Wall -Wextra -Werror -std=c++98 -g
CDEBUG			=	-fsanitize=adress 

SRC				=	main.cpp					Bureaucrat.cpp					Form.cpp\
					RobotomyRequestForm.cpp		ShrubberyCreationForm.cpp		PresidentialPardonForm.cpp\
					Intern.cpp

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