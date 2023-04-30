#include <iostream>
#include <cmath>
#include <string>
#include "car.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl << endl;

    car c1("mar" ,"yelu" , 2024);
    cout << "Hello world!  " << c1.getmaker() << endl;
    cout << "Hello world!  " << c1.getcloure() << endl;
    cout << "Hello world!  " << c1.getmodel() << endl;

    car c2("audi" ,"white" , 3000);
    cout << "Hello world!  " << c2.getmaker() << endl;
    cout << "Hello world!  " << c2.getcloure() << endl;
    cout << "Hello world!  " << c2.getmodel() << endl;

    return 0;
}
