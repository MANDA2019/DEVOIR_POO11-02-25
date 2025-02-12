#ifndef INFRASTRUCTURE_H
#define INFRASTRUCTURE_H
#include <iostream>
using namespace std;
class Infrastructure 
{
    protected:
        int surface;
        string status;
        int batnumber;
    public :
        void setsurf(int surf);
        int getsurface();
        void setstat(string  stat);
        string  getstatus();
        void setbatnum(int batnum);
        int getbatnumber();
        Infrastructure();
        ~Infrastructure();
        void Infrainfo();



};
#endif