#ifndef CALCULATOR_H
#define CALCULATOR_H

#include<iostream>
#include <string>
using namespace std;

class calculator
{
    private:
        double num1 ,num2 ,num3 ;
        string aaa , bbb ;

    public:

        int add(int num1 , int num2 );
        int add(int num1 , int num2 , int num3 );

        double add() ;

        string add_st() ;

        double  add(double num1 , double num2 );
        string  add(string a , string b) ;


        calculator();
        calculator(double a , double b );
        calculator(double a , double b , double c);
        calculator(string x , string y );

        virtual ~calculator();

    protected:


};

#endif // CALCULATOR_H
