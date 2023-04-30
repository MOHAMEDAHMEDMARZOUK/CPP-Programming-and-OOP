#include "car.h"

car::car(string m , string c , double y ) : maker_name(m) , clour(c) , year_model(y)
{

    cout << "***the attributes are initialized......... \n \n" ;
    //ctor
}

car::~car()
{
    //dtor
    cout << "***the process is finshe  \n \n" ;
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

