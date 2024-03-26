//
// Created by eddin on 26/03/24.
//
#include <vector>
#include "Matériel.h"
#ifndef UNTITLED_DECKDECARTES_H
#define UNTITLED_DECKDECARTES_H


class DeckDeCartes  : public Matériel{
private:
    std::vector<std::string> couleurs;
    std::vector<std::string> valeurs;
public:
    DeckDeCartes(std::vector<std::string> couleurs, std::vector<std::string> valeurs);
    std::string lancer() override;
};


#endif //UNTITLED_DECKDECARTES_H
