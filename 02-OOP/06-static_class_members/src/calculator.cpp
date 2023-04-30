#include "calculator.h"

calculator::calculator()
{
    //ctor
    cout <<"************** for static methods  ********************* " << "\n \n";
}


calculator::~calculator()
{
    //dtor
}


int calculator:: add(int num1 , int num2 )
{
    return num1 + num2 ;
}

int calculator:: sub(int num1 , int num2 )
{
    return num1 - num2 ;
}


int calculator:: mult(int num1 , int num2 )
{
    return num1 * num2 ;
}


double calculator::  div(double num1 , double num2 )
{
    return num1 / num2 ;
}


