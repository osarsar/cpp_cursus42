SRCS =  main.cpp \
 		Weapon.cpp\
		HumanA.cpp \
		HumanB.cpp \
		
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = main

OBJ =  $(SRCS:.cpp=.o)

%.o : %.cpp  Weapon.hpp  HumanA.hpp  HumanB.hpp
	@c++ $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) 
	@c++ $(FLAGS) $(OBJ) -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all