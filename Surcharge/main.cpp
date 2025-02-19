#include <iostream>
#include "Carre.h"
#include "Triangle.h"
#include "Form2d.h"



int main(){
    
    
    Carre x =  Carre();
    //Form2d fig1 = Triangle();
    
    x.affichage();
    x.getrayon();
    x.calcperimetre();
    x.calcsurface();
    x.affichage();
   
    Triangle y = Triangle();
   
    y.affichage();
    y.getcot1();
    y.getcot2();
    y.getcot3();
    y.calcperimetre();
    y.calcsurface();
    y.affichage();




    
    return (0);
}