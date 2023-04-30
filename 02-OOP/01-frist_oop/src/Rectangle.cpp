#include "Rectangle.h"

Rectangle::Rectangle()
{
    //ctor
    cout <<"\n\n****************** for Rectangle  ********************************* " << "\n \n";
}

Rectangle :: Rectangle(float len , float wid ) : length(len) , width(wid)
{

}

Rectangle::~Rectangle()
{
    //dtor
}


void Rectangle:: setlength (float len)
{
    length = len ;
}

void Rectangle:: setwidth  (float wid)
{
    width = wid ;
}


float Rectangle:: getlength ()
{
    return length ;
}

float Rectangle:: getwidth  ()
{
    return width ;
}

float Rectangle:: getarea   ()
{
    return length * width ;
}


Rectangle Rectangle:: add_rectangle(Rectangle r1 , Rectangle r2 , Rectangle r3)
{
    Rectangle sum ;
    sum.length = r1.length + r2.length + r3.length ;
    sum.width  = r1.width  + r2.width  + r3.width  ;
    return sum ;
}
