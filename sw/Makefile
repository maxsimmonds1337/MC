# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Targets
TARGET_APP = app
TARGET_TEST = test

# Source files
SRC = binary_1_counter.c
APP_SRC = main.c
TEST_SRC = test_binary_1_counter.c
HEADERS = binary_1_counter.h

# Object files
APP_OBJ = $(APP_SRC:.c=.o) $(SRC:.c=.o)
TEST_OBJ = $(TEST_SRC:.c=.o) $(SRC:.c=.o)

# Default target: Build both the application and tests
all: $(TARGET_APP) $(TARGET_TEST)

# Main application
$(TARGET_APP): $(APP_OBJ)
	$(CC) $(CFLAGS) -o $(TARGET_APP) $(APP_OBJ)

# Unit tests
$(TARGET_TEST): $(TEST_OBJ)
	$(CC) $(CFLAGS) -o $(TARGET_TEST) $(TEST_OBJ)

# Object files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(APP_OBJ) $(TEST_OBJ) $(TARGET_APP) $(TARGET_TEST)
