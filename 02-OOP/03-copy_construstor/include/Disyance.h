#ifndef DISYANCE_H
#define DISYANCE_H

#include <iostream>
#include <string>
using namespace std;

class Disyance
{
    private:
        float feet  ;
        float inche ;


    public:

         float getfeet ();
         float getinche();

         void setfeet_inche(float f , float in ) ;


        Disyance();
        Disyance(float fee , float in);
        virtual ~Disyance();

    protected:




};

#endif // DISYANCE_H
