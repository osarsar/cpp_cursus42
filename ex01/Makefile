SRCS =  main.cpp \
		Zombie.cpp	\
		newZombie.cpp \
		randomChump.cpp \
		zombieHorde.cpp \
		
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

OBJ =  $(SRCS:.cpp=.o)

%.o : %.cpp Zombie.hpp
	@c++ $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) 
	@c++ $(FLAGS) $(OBJ) -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all