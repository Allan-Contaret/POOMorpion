#include <iostream>
#include "Joueur.h"
#include "Plateau.h"

using namespace std;

bool fin_jeu();

Joueur player;
Plateau plateau;
// initialisation des variables et du tableau

bool egalite = false;

int main()
{
    char choix[1];
    cout << "        Bienvenue dans le petit jeu morpion code par Ivan et Allan" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "           1 - Appuyez sur 0 et entrer pour arreter le jeu" << endl;
    cout << "           2 - Appuyez sur 1 et entrer pour lancer le jeu" << endl;
    cout << "           3 - Appuyez sur 2 et entrer pour afficher les regles" << endl;
    cout << "                            Numero choisi : ";
    cin >> choix[0];
    cout << "-----------------------------------------------------------------------------" << endl;

    if(choix[0] == '2') {
        cout << "L objectif pour gagner est de creer un alignement de 3 symboles, X ou O :" << endl;
        cout << "Cet alignement peut etre vertical, horizontal ou diagonal." << endl;
        cout << "Choisissez le numero correspondant a la case choisie et appuyez sur entrer" << endl;
        cout << "-----------------------------------------------------------------------------" << endl;
        cout << "Choisissez maintenant 1 pour jouer ou 0 pour arreter : ";
        cin >> choix[0];
    }
    if(choix[0] == '0') {
        return 0;
    } else if(choix[0] == '1'){
        cout << "          Morpion\n";
        cout << "Allan [X]   VS   Ivan [O]\n";

        while (!fin_jeu())
        {
            plateau.lancement_plateau(player);
            player.tour_joueur();
            fin_jeu();
        }


        if (player.tour == 'O' && !egalite)
        {
            plateau.lancement_plateau(player);
            cout << endl << endl << "Allan Gagne! Ivan : T'es nul!\n";
        }
        else if (player.tour == 'X' && !egalite)
        {
            plateau.lancement_plateau(player);
            cout << endl << endl << "Ivan Gagne! Allan : T'es nul!\n";
        }
        else
        {
            plateau.lancement_plateau(player);
            cout << endl << endl << "Egalite! Game Over!\n";
        }
    }
}




bool fin_jeu()
{
    for (int i = 0; i < 3; i++) // vérification pour la victoire
    {
        if ((player.tableau[i][0] == player.tableau[i][1] && player.tableau[i][1] == player.tableau[i][2]) || (player.tableau[0][i] == player.tableau[1][i] &&
                                                                                                                player.tableau[1][i] == player.tableau[2][i]) ||
            (player.tableau[0][0] == player.tableau[1][1] && player.tableau[1][1] == player.tableau[2][2]) || (player.tableau[0][2] == player.tableau[1][1] &&
                                                                                                                player.tableau[1][1] == player.tableau[2][0]))
        {
            return true;
        }
    }

    for (int i = 0; i < 3; i++) // véfication pour l'égalité
    {
        for (int j = 0; j < 3; j++)
        {
            if (player.tableau[i][j] != 'X' && player.tableau[i][j] != 'O')
            {
                return false;
            }
        }
    }
    egalite = true;
    return true;
}
