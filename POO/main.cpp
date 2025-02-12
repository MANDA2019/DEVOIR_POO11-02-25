#include "Etudiant.h"
#include "Etablissement.h"

using namespace std;

int main(){

        Personn a = Personn();
        Infrastructure R = Infrastructure();
        R.setsurf(345);
        a.setname("MANDA");
        a.setTaille(172);
        a.setAge(19);
        a.getnom();
        a.info();
        Etudiant b ;
        b.getnom();
        b.getage();
        b.gettaille();
        b.getmatricule();
        b.info();
        Etablissement A ;
        A.getnom_fac();
        A.infoetab(b);
        A.getsurface();





    return(0);

}