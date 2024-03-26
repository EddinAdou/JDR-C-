#include <cstdlib>
#include "Pièce.h"
#include "Logger.h"
#include <iostream>

Pièce::Pièce(int nombreDeLancés) : nombreDeLancés(nombreDeLancés) {}

int Pièce::lancerRécursif(int n) {
    if (n==0)
        return 1;
    if (rand() % 2 == 0)
        return 0;
    return lancerRécursif(n - 1);
}

std::string Pièce::lancer() {
    std::string result = std::to_string(lancerRécursif(nombreDeLancés));
    Logger::getInstance().log("Pièce: " + result);
    return result;
}