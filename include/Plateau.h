#include <iostream>
#ifndef PLATEAU_H
#define PLATEAU_H
#include "Joueur.h"

using namespace std;

class Plateau
{
    public:
        void lancement_plateau(Joueur joueur);
        Plateau();
        ~Plateau();

    private:
};

#endif // PLATEAU_H
