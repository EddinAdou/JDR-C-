#include <vector>
#include <iostream>
#include <array>
#include "Dé.h"
#include "DeckDeCartes.h"
#include "Pièce.h"

class GameMaster {
private:
    std::vector<Dé> dés;
    std::array<DeckDeCartes, 2> decks;
    std::array<Pièce, 2> pièces;
public:
    GameMaster();
    std::string pleaseGiveMeAcrit(int tauxReussite, int tauxCritique, int tauxFumble);
};