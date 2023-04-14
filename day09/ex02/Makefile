CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

OBJS = main.o #PmergeMe.o
INC = #PmergeMe.hpp
NAME = PmergeMe

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
