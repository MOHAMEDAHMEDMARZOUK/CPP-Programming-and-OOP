#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Rectangle
{
private :

    float length ;
    float width  ;

public :
    void setlength( )
    {
        float len ;
        cout << "please enter the length of rectangle \n" ;
        cin  >> len ;
        length = len ;

        if (len > 0 ) { cout << "correct input \n" ;}
        else { cout << "enter positive numbers \n" ;}

        cout << "********************* \n \n" ;
    }

    void setwidth( )
    {
        float wid ;
        cout << "please enter the width of rectangle \n" ;
        cin  >> wid ;
        width = wid ;

        if (wid > 0 ) { cout << "correct input \n" ;}
        else { cout << "enter positive numbers \n" ;}

        cout << "********************* \n \n" ;
    }


    float getlength()
    {
        return length ;
    }

    float getwidth()
    {
        return width ;
    }

    float getarea()
    {
        return length * width ;
    }
};


int main()
{
    cout << "Hello world!" << endl;
    Rectangle x ;

    x.setlength() ;
    x.setwidth() ;

    cout <<" the length = " << x.getlength() << "\n";
    cout <<" the width  = " << x.getwidth()  << "\n";
    cout <<" the Area =  length * width  = " << x.getarea() << "\n";
    return 0;
}

