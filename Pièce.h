#include "Matériel.h"
#include <iostream>


class Pièce : public Matériel {
private:
    int nombreDeLancés;
    int lancerRécursif(int n);

public:
    Pièce(int nombreDeLancés);
    std::string lancer() override;
};