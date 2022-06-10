#pragma once
enum Suit
{
    Heart,
    Spades,
    Clubs,
    Diamonds
};
class Card
{
public:
    int value;
    Suit CardSuit;
    Card(int myValue, Suit myCardSuit);
    Card();
};