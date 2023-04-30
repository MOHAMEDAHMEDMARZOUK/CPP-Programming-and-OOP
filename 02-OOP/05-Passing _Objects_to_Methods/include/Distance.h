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

         void setfeet_inche(float f , float in ) ;
         Distance add_distances(Distance d1 , Distance d2 , Distance d3 );


        Distance();
        Distance(float fee , float in);
        virtual ~Distance();

    protected:

};

#endif // DISTANCE_H
