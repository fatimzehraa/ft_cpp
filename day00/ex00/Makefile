CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = megaphone.o
NAME = megaphone

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
