#include <iostream>
#include "Plateau.h"
#include "Joueur.h"

using namespace std;


Plateau::Plateau()
{
    //ctor
}

Plateau::~Plateau()
{
    //dtor
}

void Plateau::lancement_plateau(Joueur joueur)
{
    cout << "--------------------------" << endl;
    cout << "          |     |     " << endl;
    cout << "       " << joueur.tableau[0][0] << "  |  " << joueur.tableau[0][1] << "  |  " << joueur.tableau[0][2] << endl;
    cout << "     _____|_____|_____" << endl;
    cout << "          |     |     " << endl;
    cout << "       " << joueur.tableau[1][0] << "  |  " << joueur.tableau[1][1] << "  |  " << joueur.tableau[1][2] << endl;
    cout << "     _____|_____|_____" << endl;
    cout << "          |     |     " << endl;
    cout << "       " << joueur.tableau[2][0] << "  |  " << joueur.tableau[2][1] << "  |  " << joueur.tableau[2][2] << endl;
    cout << "          |     |     " << endl << endl;
}
