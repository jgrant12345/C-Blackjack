 #pragma once
 #include "Card.hpp"
 class Deck{
     static int const DECK_SIZE = 52;
     static Card deck_of_cards [DECK_SIZE];
    public:
      Deck();
      static void Create_deck();

       
};