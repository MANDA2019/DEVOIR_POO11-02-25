#include<iostream>
#include "Etudiant.h"
#include "Infratructure.h"
using namespace std;

class Etablissement:public Infrastructure{
    private:
        string nom_fac;
    public:
        void setnom_fac(string nom_facul);
        string getnom_fac();
        Etablissement();
        ~Etablissement();
        void infoetab(Etudiant a);





};