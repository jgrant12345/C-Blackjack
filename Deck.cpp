#include <iostream>
enum Suit
{
    Heart,
    Spades,
    Clubs,
    Diamonds
};
class Deck
{
public:
    int value;
    Suit CardSuit;
    Deck(int valueInput, Suit CardSuitInput)
    {
      value = valueInput; 
      CardSuit = CardSuitInput; 
    }
};