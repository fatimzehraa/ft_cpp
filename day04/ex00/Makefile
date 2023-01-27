CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

#inc = -I./
OBJ = main.o Dog.o Cat.o Animal.o WrongAnimal.o WrongCat.o
INC = Dog.hpp Cat.hpp Animal.hpp WrongCat.hpp WrongAnimal.hpp
NAME = Animals

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
