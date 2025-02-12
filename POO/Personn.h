#ifndef PERSONN_H
#define PERSONN_H
#include <iostream>
#include <string.h>
using namespace std;

class Personn
{
    protected:
        string nom;
        int age;
        int taille;

    public :
        Personn();
        ~Personn();
        void info();
        void setname(string  name);
        void setAge(int Age);
        void setTaille(int Taille);
        string getnom();
        int  getage();
        int  gettaille();
        
        


};

#endif