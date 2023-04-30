#include "calculator.h"

calculator::calculator()
{
    //ctor
}


calculator::calculator(double a , double b ) : num1(a) , num2(b)
{

}

calculator::calculator(double a , double b , double c) : num1(a) , num2(b) , num3(c)
{

}

calculator::calculator(string x , string y ) : aaa(x) , bbb(y)
{

}



calculator::~calculator()
{
    //dtor
}


double calculator::  add( )
{
    return num1 + num2 ;
}



int calculator:: add(int num1 , int num2 )
{
    return num1 + num2 ;
}


int calculator:: add(int num1 , int num2 , int num3 )
{
    return num1 + num2 +num3 ;
}


double calculator::  add(double num1 , double num2 )
{
    return num1 + num2 ;
}

string calculator:: add(string a , string b)
{
    return a + " " + b ;
}


string calculator:: add_st()
{
    return aaa + " " + bbb ;
}

