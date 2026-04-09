CC = gcc
CFLAGS = -Wall -Iinclude
SRC = src/filtres_inclusion.c src/filtres_exclusion.c src/main.c
TARGET = bin/wordle_solver

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET) src/*.o
