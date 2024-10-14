NAME = so_long

SRC_DIR = ./src/

SRC =

OBJ = $(SRC:.c=.o)

CC = cc
RM = rm -f
FLAGS = -Wall -Werror -Wextra


.c.o:
			$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean: clean
			$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
