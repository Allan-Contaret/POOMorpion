#include <iostream>
#ifndef JOUEUR_H
#define JOUEUR_H

using namespace std;

class Joueur
{
    public:
        void tour_joueur();
        Joueur();
        ~Joueur();
        char tableau[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
        char tour = 'X';

    private:
};

#endif // JOUEUR_H
