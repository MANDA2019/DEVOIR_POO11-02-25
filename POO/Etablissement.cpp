#include "Etablissement.h"
#include "Etudiant.h"
 Etablissement::Etablissement(){



 }
Etablissement::~Etablissement(){



}
void Etablissement::infoetab(Etudiant a){
        a.getnom();
        a.getage();
        a.gettaille();
        a.info();
        

        
        }
void Etablissement::setnom_fac(string nom_facul){

        nom_fac = nom_facul;


}
string Etablissement::getnom_fac(){
        cout <<"nom de la faculte "<<"=";
        cin >> nom_fac;
        
        return nom_fac;

}