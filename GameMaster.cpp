#include <cstdlib>
#include "GameMaster.h"
#include <iostream>

GameMaster::GameMaster() : dés(), decks({DeckDeCartes({"Coeur", "Carreau", "Trèfle"}, {"As", "2", "3", "4", "5", "6", "7", "8", "9", "10","Valet", "Dame", "Roi"}),
                                         DeckDeCartes({"Coeur", "Carreau", "Trèfle", "Pique"},{"As", "2", "3", "4", "5", "6", "7", "8", "9","10", "Valet", "Dame", "Roi"})}), pièces({Pièce(3), Pièce(5)}) {
    for (int i = 0; i < 10; i++)
    {
        dés.push_back(Dé(6));
        dés.push_back(Dé(10));
        dés.push_back(Dé(20));
    }
}