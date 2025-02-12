#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <iostream>
#include "Personn.h"

class Etudiant:public Personn
{
    private:
        int matricule;

    public:

        void setmatri(int matric);
        int getmatricule();
        Etudiant();
        ~Etudiant();



};
#endif