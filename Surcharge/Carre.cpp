#include "Carre.h"
#include "Form2d.h"
using namespace std;


Carre::Carre(){


}
Carre::~Carre()
{




            }
void Carre::setray(float dimension1){

        rayon  = dimension1;
        

            }
float Carre::getrayon(){
            cout <<"Rayon = "<<"";
            cin >> rayon;
            if(rayon <= 0)
                {
            exit(1);

                    }


            return(rayon);


            }           
void Carre::calcperimetre ()
{
        perimetre = 2*rayon*(22/7);
        


            }
void Carre::calcsurface()
{

        surface = rayon*rayon*(22/7);


            }
void Carre::affichage()
{

        cout <<"cercle de rayon r = "<< rayon<<endl;
        cout <<"perimetre = "<< perimetre<<" surface = " << surface <<endl;




            }