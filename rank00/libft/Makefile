# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -Iinclude

# Directories
SRC_DIR = src
OBJ_DIR = obj
INCLUDE_DIR = include

# Files and targets
NAME = libft.a
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:
	# Add bonus file handling if needed

.PHONY: all clean fclean re bonus
