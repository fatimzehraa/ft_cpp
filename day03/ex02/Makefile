CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98 -fsanitize=address

#inc = -I./
OBJ = main.o ClapTrap.o ScavTrap.o FragTrap.o
INC = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
NAME = FragTrap

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
