CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Character.cpp MateriaSource.cpp AMateria.cpp Ice.cpp Cure.cpp

OBJS = $(FILES:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

NAME = materia

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re