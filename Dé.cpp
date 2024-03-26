//
// Created by eddin on 26/03/24.
//
#include <cstdlib>
#include "Dé.h"
#include "Logger.h"
#include <iostream>
#include "Dé.h"

Dé::Dé(int nombreDeFaces){
    for (int i = 1; i <= nombreDeFaces; ++i) {
        faces.push_back(i);
    }
}
std::string Dé ::lancer() {
    std::string result = std::to_string(faces[rand() % faces.size()]);
    Logger::getInstance().log("Dé: " + result);
    return result;

}