NAME = ex01

CXX = c++

SRCS =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		Brain.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME):	$(OBJS)
	$(CXX) $(FLAGS) $(SRCS) -o $(NAME)

all:		$(NAME)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
