#include <vector>
#include <iostream>
#include "Matériel.h"//
// Created by eddin on 26/03/24.
//

#ifndef UNTITLED_DÉ_H
#define UNTITLED_DÉ_H


class Dé : public Matériel{
private:
    std::vector<int> faces;
public:
    Dé(int nombreDeFaces);
    std::string lancer() override;
};


#endif //UNTITLED_DÉ_H
