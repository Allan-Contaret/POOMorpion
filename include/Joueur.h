#include <iostream>
#ifndef JOUEUR_H
#define JOUEUR_H

using namespace std;

class Joueur
{
    public:
        void tour_joueur();
        Joueur();
        virtual ~Joueur();
    protected:
    private:
        char tableau[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
};

#endif // JOUEUR_H
