NAME = ex01

SRCS =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME):	$(OBJS)
	c++ $(FLAGS) $(SRCS) -o $(NAME)

all:		$(NAME)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re