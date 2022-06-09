#include "Deck.hpp"
#include "Card.hpp"
#include <iostream>


using namespace std;
int main(){
    Card mycard = Card(1, Heart);
    // cout << mycard.value;
    // Deck mydeck = Deck();
    Deck myDeck = Deck();
    Deck::Create_deck();
    return 0;

}


