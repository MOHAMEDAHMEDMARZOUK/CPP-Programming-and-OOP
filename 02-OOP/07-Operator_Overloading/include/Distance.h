#ifndef DISTANCE_H
#define DISTANCE_H

#include <iostream>
#include <string>
using namespace std;


class Distance
{
    private:
        float feet  ;
        float inche ;

    public:
        float getfeet ();
        float getinche();
        Distance add_distances(Distance d1 , Distance d2 , Distance d3 );

        Distance();
        Distance(float fee , float in);
        virtual ~Distance();

//  Overloading Binary ( x + y ) Operators ::

Distance operator + (Distance d2 )
{
    Distance d_resulat ;
    d_resulat.feet  = feet + d2.feet  ;
    d_resulat.inche = inche + d2.inche  ;

    return d_resulat ;

}

Distance operator - (Distance d2 )
{
    Distance d_resulat ;
    d_resulat.feet  = feet - d2.feet  ;
    d_resulat.inche = inche - d2.inche  ;

    return d_resulat ;

}



};

#endif // DISTANCE_H
