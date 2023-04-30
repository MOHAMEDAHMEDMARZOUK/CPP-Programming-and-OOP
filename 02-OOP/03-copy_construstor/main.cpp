#include <iostream>
#include <cmath>
#include <string>
#include "Disyance.h"
using namespace std;


int main()
{
    cout << "Hello world!" << endl;

    Disyance d1;
    Disyance d2(13.67 , 98.5);
    Disyance d3=d2;
    Disyance d4(d1);

    cout << "the distance by feet = " << d1.getfeet() << "\n" ;
    cout << "the distance by inch = " << d1.getinche() << "\n\n\n" ;

    cout << "the distance by feet = " << d2.getfeet() << "\n" ;
    cout << "the distance by inch = " << d2.getinche() << "\n\n\n" ;

    cout << "the distance by feet = " << d3.getfeet() << "\n" ;
    cout << "the distance by inch = " << d3.getinche() << "\n\n\n" ;

    cout << "the distance by feet = " << d4.getfeet() << "\n" ;
    cout << "the distance by inch = " << d4.getinche() << "\n\n\n" ;

    d1.setfeet_inche(45.89 , 13.42) ;
    cout << "the distance by feet = " << d1.getfeet() << "\n" ;
    cout << "the distance by inch = " << d1.getinche() << "\n\n\n" ;
     return 0;
}
