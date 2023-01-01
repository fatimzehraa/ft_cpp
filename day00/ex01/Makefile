CC = g++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

#inc = -I./
OBJ = main.o contact.o phonebook.o
INC = contact.hpp phonebook.hpp
NAME = phonebook

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

%.o: %.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
