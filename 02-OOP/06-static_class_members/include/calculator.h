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

        static int add(int num1 , int num2 );
        static int sub(int num1 , int num2 );
        static int mult(int num1 , int num2);

        static double  div(double num1 , double num2 );

        calculator();

        virtual ~calculator();

    protected:


};

#endif // CALCULATOR_H
