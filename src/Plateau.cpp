#include <iostream>
#include "Plateau.h"

using namespace std;

Plateau::Plateau()
{
    //ctor
}

Plateau::~Plateau()
{
    //dtor
}

void Plateau::lancement_plateau()
{
    cout << "--------------------------" << endl;
    cout << "          |     |     " << endl;
    cout << "       " << tableau[0][0] << "  |  " << tableau[0][1] << "  |  " << tableau[0][2] << endl;
    cout << "     _____|_____|_____" << endl;
    cout << "          |     |     " << endl;
    cout << "       " << tableau[1][0] << "  |  " << tableau[1][1] << "  |  " << tableau[1][2] << endl;
    cout << "     _____|_____|_____" << endl;
    cout << "          |     |     " << endl;
    cout << "       " << tableau[2][0] << "  |  " << tableau[2][1] << "  |  " << tableau[2][2] << endl;
    cout << "          |     |     " << endl << endl;
}
