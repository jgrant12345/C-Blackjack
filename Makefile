all: Game

Game.o: Game.cpp 
	clang++ -c -o Game.o Game.cpp -Wall -Wextra -pedantic -std=c++1z

Card.o: Card.cpp Card.hpp
	clang++ -c -o Card.o Card.cpp -Wall -Wextra -pedantic -std=c++1z

Game: Game.o Card.o
	clang++ -o Game Game.o Card.o -Wall -Wextra -pedantic -std=c++1z

clean:
	rm -rf *.o test