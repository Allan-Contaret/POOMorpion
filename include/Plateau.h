#include <iostream>
#ifndef PLATEAU_H
#define PLATEAU_H

using namespace std;

class Plateau
{
    public:
        void lancement_plateau();
        Plateau();
        virtual ~Plateau();
    protected:
    private:
        char tableau[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

};

#endif // PLATEAU_H
