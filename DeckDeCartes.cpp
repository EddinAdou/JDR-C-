//
// Created by eddin on 26/03/24.
//
#include <cstdlib>
#include "DeckDeCartes.h"
#include "Logger.h"
#include "DeckDeCartes.h"

DeckDeCartes::DeckDeCartes(std::vector<std::string> couleurs, std::vector<std::string> valeurs) : couleurs(couleurs), valeurs(valeurs){}
std::string DeckDeCartes::lancer() {
    std::string couleur = couleurs[rand() % couleurs.size()];
    std::string  valeur = valeurs[rand() % valeurs.size()];
    std::string result = valeur + " de " + couleur;
    Logger::getInstance().log("Carte tirée: " + result);
    return result;
}