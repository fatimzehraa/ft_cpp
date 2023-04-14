CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

OBJS = main.o RPN.o
INC = RPN.hpp
NAME = RPN

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
