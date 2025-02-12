#include "Personn.h"
using namespace std;

Personn::Personn(){
        cout <<"construction.."<<endl;



}
Personn::~Personn(){





}
void Personn::info(){
        cout <<"nom:"<< nom <<endl;
        cout <<"age:"<< age <<endl;
        cout <<"taille(en cm):"<< taille <<endl;




    }
void Personn::setname(string name){
        
        nom = "MANDA" ;


}
void Personn::setAge(int Age){
        
        age = 19 ;

        }
void Personn::setTaille(int Taille){
        
        taille = 172;

        }
string  Personn::getnom(){
        cout <<"nom:"<<"";
        cin >> nom;
        
        return nom;
        

}
int Personn::getage(){
        cout <<" age: "<<"";
        cin >> age;
    
        return age;

        }
int Personn::gettaille(){
    cout <<"taille:"<<"";
        cin >> taille;
        
        return taille;

        }