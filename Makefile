CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

TARGET = test

SRC = src/linked_list.c \
      examples/main.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -rf $(TARGET)
