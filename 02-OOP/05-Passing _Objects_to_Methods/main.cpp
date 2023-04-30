#include <iostream>
#include <cmath>
#include <string>
#include "Distance.h"
using namespace std;
int main()
{
    cout << "Hello world!" << endl;

    Distance d1(34.80 , 23.5);
    Distance d2(95.21 , 62.5);
    Distance d3(57.43 , 30.7);
    Distance d4;

    d4 = d4.add_distances(d1,d2,d3) ;

    cout << "the distance by feet = " << d4.getfeet() << "\n" ;
    cout << "the distance by inch = " << d4.getinche() << "\n\n\n" ;
    return 0;
}
