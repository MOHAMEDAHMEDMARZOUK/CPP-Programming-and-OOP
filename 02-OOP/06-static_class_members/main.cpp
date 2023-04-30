#include <iostream>
#include <cmath>
#include <string>
#include "car.h"
#include "calculator.h"
using namespace std;
int main()
{
//**************** for static attributes ********
    car c1 ;
    cout << "counter reached ....  "<<c1.getcounte() << endl;
    car c2 ;
    cout << "counter reached ....  "<<c2.getcounte() << endl;
    car c3 ;
    cout << "counter reached ....  "<<c3.getcounte() << endl << endl;

//****************   for static methods  *******

calculator cc ;
    cout << "please enter two numbers to calculator :\n";
    double num1 , num2 ;
    cin >> num1 >> num2 ;


    cout << "the sum  of two numbers ....  =  "<<calculator ::add (num1 , num2 ) << endl;
    cout << "the sub  of two numbers ....  =  "<<calculator ::sub (num1 , num2 ) << endl;
    cout << "the mult of two numbers ....  =  "<<calculator ::mult(num1 , num2 ) << endl;
    cout << "the div  of two numbers ....  =  "<<calculator ::div (num1 , num2 ) << endl;

    return 0;
}

