#include "Disyance.h"

Disyance :: Disyance() : feet(0) , inche(0)
{
    //ctor
}

Disyance :: Disyance(float fee , float in) : feet(fee) , inche(in)
{

}

Disyance::~Disyance()
{
    //dtor
}


void Disyance:: setfeet_inche(float f , float in )
{
    feet = f ;
    inche = in ;
}


float Disyance:: getfeet ()
{
    return feet ;
}

float Disyance:: getinche()
{
    return inche ;
}



