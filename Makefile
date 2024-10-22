NAME = my_programme
CFLAGS = -Wall -Wextra -Werror
cc = gcc 

# Source and object file

SRC = main.c ft_strlen.c
OBJ = $(SRC:.c=.o) 

# Default rule

all: $(NAME)

# Rule to create the executable

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Clean up object files
clean:
	rm -f $(OBJ)

# Remove the executable and object files
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re