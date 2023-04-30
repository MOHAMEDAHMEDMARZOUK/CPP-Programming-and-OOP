#include <iostream>
#include <cmath>
#include <string>
#include "car.h"
#include "Rectangle.h"
using namespace std;


int main()
{
/*
// ****************** for car  *********************************

    car car1 ;

    string name , clour ;
    double year ;

    cout <<"please enter your car name and color  " << "\n";
    cin >> name >> clour ;
    cout <<"please enter your car model year  " << "\n";
    cin >> year ;

    car1.setmaker(name);
    car1.setclour(clour);
    car1.setmodel(year) ;

    cout <<"\n your car name is " << car1.getmaker()   << "\n";
    cout <<" your car color  is " << car1.getcloure()  << "\n";
    cout <<" your car model year is " << car1.getmodel() << "\n";


// ****************** for Rectangle  *********************************

    Rectangle rec1;
    float width , length ;

    cout <<"please enter the length & width to get area   " << "\n";
    cin >> length >> width ;

    rec1.setlength(length);
    rec1.setwidth (width) ;

    cout <<"\n the length = " << rec1.getlength()   << "\n";
    cout <<" the width  = "   << rec1.getwidth ()   << "\n";
    cout <<" the Area   =  length * width  =  " << rec1.getarea() << "\n";
*/

// ****************** passing object  *********************************

Rectangle r1(12.9 , 5.2) ;
Rectangle r2(5.2  , 43.7) ;
Rectangle r3(19.21 , 2.8) ;
Rectangle r4 ;

r4 = r4.add_rectangle(r1 , r2 , r3) ;

cout << "the length of sum = " <<r4.getlength() << endl ;
cout << "the width of sum  = " <<r4.getwidth()  << endl ;
cout << "the area of sum   = " <<r4.getarea()   << endl ;

    return 0;
}


