#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct distance_type
{
    int feet ;
    float inch ;

} ;

distance_type add_distance (distance_type dis1 , distance_type dis2) ;

int main()
{
    distance_type e1[3] ;

    for (int i = 0 ; i < 2 ; i++)
    {

    cout << i+1 <<"-enter the feet number and inch number\n";
    cin >> e1[i].feet  >> e1[i].inch ;

    cout <<"\n///////////////////////////////////////// \n\n" ;

    }

    e1[2] = add_distance(e1[0] , e1[1]) ;

    cout <<"- the sum of feet number = " << e1[2].feet << "\n" ;

    cout <<"- the sum of inch number = " << e1[2].inch << "\n" ;

    cout <<" //**************************************************\\ \n" ;

    return 0;

}

distance_type add_distance (distance_type dis1 , distance_type dis2)
{
    distance_type sum ;
    sum.feet = dis1.feet + dis2.feet ;
    sum.inch = dis1.inch + dis2.inch ;

    return sum ;
}
