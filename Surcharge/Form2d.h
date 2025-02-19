#ifndef FORM2d_H
#define FORM2d_H
#include <iostream>

class Form2d
{
    protected:
        float dimension1;
        float dimension2;
        float perimetre;
        float surface;
    public:
        Form2d();
       virtual ~Form2d();
        void setdim1(float dim1);
        float getdimension1();
        void setdim2(float dim2);
        float getdimension2();
        virtual void test();
        virtual void  calcperimetre() = 0;
        virtual void  calcsurface() = 0;
        






};
#endif