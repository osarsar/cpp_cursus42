SRCS = megaphone.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

OBJ =  $(SRCS:.cpp=.o)


%.o : %.cpp
	@c++ $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@c++ $(FLAGS) $(OBJ) -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf megaphone

re : fclean all