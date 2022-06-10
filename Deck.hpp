 #pragma once
 #include "Card.hpp"
 class Deck{
     static int const DECK_SIZE = 52;
     
    public:
      Deck();
      Card deck_of_cards[DECK_SIZE];
      static void Create_deck();

       
};