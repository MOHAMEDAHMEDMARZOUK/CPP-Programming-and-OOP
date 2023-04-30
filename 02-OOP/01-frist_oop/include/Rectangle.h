#include <iostream>
#include <cmath>
#include <string>
using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
private:
        float length ;
        float width  ;

public:
    void setlength (float len);
    void setwidth  (float wid);

    float getlength ();
    float getwidth  ();
    float getarea   ();

    Rectangle add_rectangle(Rectangle r1 , Rectangle r2 , Rectangle r3);


        Rectangle();
        Rectangle(float len , float wid ) ;

        virtual ~Rectangle();

    protected:


};

#endif // RECTANGLE_H
