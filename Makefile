CC := g++
FLAGS := -Wall -m64
TARGET := main.out

all: main

cards:
	$(CC) $(FLAGS) -c cards.cpp -o cards.o

player: cards
	$(CC) $(FLAGS) -c player.cpp -o player.o

game: cards player
	$(CC) $(FLAGS) -c game.cpp -o game.o

main: cards player game
	$(CC) $(FLAGS) player.o cards.o game.o main.cpp -o $(TARGET)

clean:
	$(RM) -r *.o *.out $(TARGET)

tests: cards player game
	$(CC) $(FLAGS) player.o cards.o game.o unit_tests/unit_tests.cpp -o unit_tests.out