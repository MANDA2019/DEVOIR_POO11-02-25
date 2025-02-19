#include <iostream>
#include <cmath>
#include "Triangle.h"
#include "Form2d.h"

using namespace std;
Triangle::Triangle(){



}
Triangle::~Triangle(){



}

void Triangle::setcot1(float cot1){

        
        cote1 = cot1;


}
float Triangle::getcot1(){

        cout <<"coté1"<<"=";
        cin >> cote1;
        return(cote1);


}
void Triangle::setcot2(float cot2){
        
        cote2 = cot2;



}
float Triangle::getcot2(){

        cout <<"coté2"<<"=";
        cin >> cote2;
        return(cote2);


}
void Triangle::setcot3(float cot3){

        cote3 = cot3;


}
float Triangle::getcot3(){

        cout <<"coté3"<<"=";
        cin >> cote3;
        return(cote3);

}

void Triangle::calcperimetre(){
        
        perimetre = cote1+cote2;         //somme des trois cotés 
        perimetre += cote3;
        



}        
void Triangle::calcsurface(){
        float sp = (cote1+cote2+cote3)/2;                               //semi-perimetre 
        surface = sqrt(sp*(sp-cote1)*(sp-cote2)*(sp-cote3));            //surface utilisant  le semi-perimetre



}            
void Triangle::affichage(){
        cout <<" Triangle de coté 1 = "<< cote1 << " coté 2 = " << cote2 << " coté 3 = " << cote3 <<endl;
        cout <<"surface = " << surface << "," << "périmetre = " << perimetre <<endl;


}        