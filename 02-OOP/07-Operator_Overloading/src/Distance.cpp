#include "Distance.h"

Distance::Distance() : feet(0) , inche(0)
{
    //ctor
    cout << "\n \n"<<"*********** for Overloading Binary ( x + y ) Operators ::  ************ " << "\n \n";
}

Distance :: Distance(float fee , float in) : feet(fee) , inche(in)
{

}

Distance::~Distance()
{
    //dtor
}


Distance  Distance ::  add_distances(Distance d1 , Distance d2 , Distance d3 )
{
    Distance d_resulat ;
    d_resulat.feet  = d1.feet + d2.feet + d3.feet ;
    d_resulat.inche = d1.inche + d2.inche + d3.inche ;

    return d_resulat ;
}


float Distance:: getfeet ()
{
    return feet ;
}

float Distance:: getinche()
{
    return inche ;
}
