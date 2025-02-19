#ifndef CARRE_H
#define CARRE_H
#include <iostream>
#include "Form2d.h"

class Carre : public Form2d{
        //attribut 
        private:
            float rayon;                //rayon du cercle 
            float perimetre;            //périmetre d'un cercle
            float surface;              //surface d'un cercle
        //methode
        public:
            Carre();
            ~Carre();
            void setray(float dimeansion1);
            float getrayon();
            /*void setray(float rayon);
            float getrayon();*/
            void calcperimetre();           //calcul du perimetre d'un cercle
            void calcsurface();             //calcul du surface d'un cercle
            void affichage();               //affichage des résultats




};
#endif