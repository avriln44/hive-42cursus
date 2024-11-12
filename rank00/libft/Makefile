# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRC_DIR1 = src/part1
SRC_DIR2 = src/part2
OBJ_DIR = obj
BIN_DIR = bin

# Source files
SRC1 = $(wildcard $(SRC_DIR1)/*.c)
SRC2 = $(wildcard $(SRC_DIR2)/*.c)
SRC = $(SRC1) $(SRC2)

# Object files
OBJ = $(patsubst %.c, $(OBJ_DIR)/%.o, $(notdir $(SRC)))

# Target executable
TARGET = $(BIN_DIR)/program

# Rules
all: $(TARGET)

$(TARGET): $(OBJ)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR1)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR2)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(BIN_DIR)

re: fclean all

debug:
	@echo "SRC_DIR1: $(SRC_DIR1)"
	@echo "SRC_DIR2: $(SRC_DIR2)"
	@echo "SRC: $(SRC)"

.PHONY: all clean fclean re debug
