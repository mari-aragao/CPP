NAME = phonebook

SRCS =	PhoneBook.cpp \
		Contact.cpp \
		main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME):	$(SRCS)
	c++ $(FLAGS) $(SRCS) -o $(NAME)

all:		$(NAME)

clean:
	rm -rf *.o

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re