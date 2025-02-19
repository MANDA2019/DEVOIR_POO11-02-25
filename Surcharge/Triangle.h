#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include "Form2d.h"

class Triangle : public Form2d{
        //attribut 
        private:
            float cote1;                //coté1 
            float cote2;                //coté2 
            float cote3;                //coté3 
            float perimetre;            //périmetre d'un Triangle
            float surface;              //surface d'un Triangle
        //methode
        public:
            Triangle();
           virtual ~Triangle();
            void setcot1(float cot);
            float getcot1();
            void setcot2(float cot2);
            float getcot2();
            void setcot3(float cot3);
            float getcot3();
            /*void setray(float rayon);
            float getrayon();*/
            void calcperimetre() override;          //calcul du perimetre d'un triangle
            void calcsurface() override ;             //calcul du surface d'un triangl
            void affichage();               //affichage des résultats




};
#endif  