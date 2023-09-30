SRCS =  main.cpp \
		Contact.cpp	\
		PhoneBook.cpp \

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

OBJ =  $(SRCS:.cpp=.o)

%.o : %.cpp PhoneBook.hpp Contact.hpp
	@c++ $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ) 
	@c++ $(FLAGS) $(OBJ) -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all