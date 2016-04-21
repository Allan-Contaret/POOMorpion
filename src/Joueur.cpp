#include <iostream>
#include "Joueur.h"

using namespace std;

Joueur::Joueur()
{
    //ctor
}

Joueur::~Joueur()
{
    //dtor
}

void Joueur::tour_joueur()
{
    int choix;
    int ligne = 0, colonne = 0;

    if (tour == 'X')
    {
        cout << "     Tour d'Allan [X]: ";
    }
    if (tour == 'O')
    {
        cout << "     Tour d'Ivan [O]: ";
    }
    cin >> choix;

    switch (choix)
    {
        case 1: ligne = 0; colonne = 0; break;
        case 2: ligne = 0; colonne = 1; break;
        case 3: ligne = 0; colonne = 2; break;
        case 4: ligne = 1; colonne = 0; break;
        case 5: ligne = 1; colonne = 1; break;
        case 6: ligne = 1; colonne = 2; break;
        case 7: ligne = 2; colonne = 0; break;
        case 8: ligne = 2; colonne = 1; break;
        case 9: ligne = 2; colonne = 2; break;
        default:
            cout << "Mauvais chiffre rentre! Recommence\n";
        tour_joueur();
    }

    if (tour == 'X' && tableau[ligne][colonne] != 'X' && tableau[ligne][colonne] != 'O'){
        tableau[ligne][colonne] = 'X';
        tour = 'O';
    } else if (tour == 'O' && tableau[ligne][colonne] != 'X' && tableau[ligne][colonne] != 'O') {
        tableau[ligne][colonne] = 'O';
        tour = 'X';
    } else {
        cout << "Cette case est deja utilisee! Recommence\n";
        tour_joueur();
    }
}

