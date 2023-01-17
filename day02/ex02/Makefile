CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

#inc = -I./
OBJ = main.o Fixed.o
INC = Fixed.hpp
NAME = Fixed

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
