#include <cstdlib>
#include <ctime>
#include "Dé.h"
#include "Pièce.h"
#include "DeckDeCartes.h"

int main(){
    system("chcp 65001");
    srand(time(0));
    Dé de(6);
    Pièce pièce(3);
    DeckDeCartes deck({"Coeur", "Carreau", "Trèfle", "Pique"}, {"As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Valet", "Dame", "Roi"});
    de.lancer();
    pièce.lancer();
    deck.lancer();
    return 0;
}