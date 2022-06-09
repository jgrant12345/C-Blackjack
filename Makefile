all: Game


Card.o: Card.cpp Card.hpp
	clang++ -c -o Card.o Card.cpp -Wall -Wextra -pedantic -std=c++1z

Deck.o: Deck.cpp Deck.hpp
	clang++ -c -o Deck.o Deck.cpp -Wall -Wextra -pedantic -std=c++1z

Game.o: Game.cpp 
	clang++ -c -o Game.o Game.cpp -Wall -Wextra -pedantic -std=c++1z

Game: Game.o Card.o Deck.o
	clang++ -o Game Game.o Card.o Deck.o -Wall -Wextra -pedantic -std=c++1z

clean:
	rm -rf *.o test