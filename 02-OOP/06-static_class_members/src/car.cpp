#include "car.h"

int car:: counter = 0 ;
car::car()
{
    //ctor
    counter++ ;
    cout <<"************** for static attributes  ********************* " << "\n \n";
}

car::~car ()
{
    //dtor
    counter--;
}


void car :: setmaker (string make)
{
    maker_name = make ;
}

void car ::  setclour (string clo )
{
    clour = clo ;
}

void car ::  setmodel (double year)
{
    year_model = year ;
}

string car :: getmaker  ()
{
    return maker_name ;
}

string car :: getcloure ()
{
    return clour ;
}

double car :: getmodel  ()
{
    return year_model ;
}


int car :: getcounte ()
{
    return counter ;
}




