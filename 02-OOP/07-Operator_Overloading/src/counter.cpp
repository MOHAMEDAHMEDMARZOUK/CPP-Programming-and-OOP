#include "counter.h"

counter::counter() : coun(0)
{
    //ctor
    cout <<"*********** for Overloading Unary Operators ::  **************** " << "\n \n";
}

counter::counter(int c) : coun (c)
{

}

counter::~counter()
{
    //dtor
}

int counter:: getcounter ()
{
    return coun;
}
