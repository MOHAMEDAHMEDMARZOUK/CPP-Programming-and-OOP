#include <iostream>
#include <cmath>
#include <string>
#include "counter.h"
#include "Distance.h"

using namespace std;
int main()
{
    cout << "Hello world!" << endl;

    counter c;
    cout << "counter value ......" << c.getcounter() << endl;
    counter c1(8);
    cout << "counter value ......" << c1.getcounter() << endl;
    counter c2(15);
    cout << "counter value ......" << c2.getcounter() << endl;

    cout << endl << " /*  pre - increment (++X) or (--X) */" << endl << endl ;
    counter c3 = ++c1;
    counter c4 = --c2;
    cout << "counter value ......" << c3.getcounter() << endl;
    cout << "counter value ......" << c4.getcounter() << endl;

    cout << endl << " /*  post - increment (X++) or (X--) */" << endl << endl;
    c3 = c1++;
    c4 = c2--;
    cout << "counter value ......" << c3.getcounter() << endl;
    cout << "counter value ......" << c4.getcounter() << endl;

    Distance d1(15.6 , 6.7);
    Distance d2(5 , 7);
    Distance d3(2.4 , .3);
    Distance d5(5.3 , 8);
    Distance d4 = d1 + d2 + d3 - d5 ;

    Distance dd ;
    dd = dd.add_distances(d1 , d2 , d5) ;
    cout << "the distance by feet = " << dd.getfeet() << "\n" ;
    cout << "the distance by inch = " << dd.getinche() << "\n\n\n" ;

    cout << "the distance by feet = " << d4.getfeet() << "\n" ;
    cout << "the distance by inch = " << d4.getinche() << "\n\n\n" ;



    return 0;
}

