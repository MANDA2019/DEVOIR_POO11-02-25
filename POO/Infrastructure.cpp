#include "Infrastructure.h"
using namespace std;
void Infrastructure::setsurf(int surf){
        surface = surf;


 }
int Infrastructure::getsurface(){
        cout <<"surface"<<"=";
        cin >> surface;

        return (surface);

        }
void Infrastructure::setstat(string  stat){
        status = stat;


        }
string Infrastructure::getstatus(){
        cout <<"status(Prive/Public)"<<"=";
        cin >> status;
        return(status);

        }
void Infrastructure::setbatnum(int batnum){
        cout <<"nombre de batiment"<<"=";
        cin >> batnumber;
        batnumber = batnum;


        }
int Infrastructure:: getbatnumber(){
        return batnumber;

        }
Infrastructure::Infrastructure(){
        cout <<"construction d'une infrastructure"<<endl;


        }
Infrastructure::~Infrastructure(){
        cout <<"destruction.."<<endl;


        }
void Infrastructure::Infrainfo(){




        }