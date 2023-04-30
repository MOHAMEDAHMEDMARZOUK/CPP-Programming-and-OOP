#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

double Are_shpere ( int Radius );
double Volume_shpere ( int Radius );

int main()
{
    double Radius , ReUSLT_1 , ReUSLT_2 ;
    cout << "enter the radius of shpere\n" ;
    cin >> Radius ;

    ReUSLT_1 = Are_shpere(Radius);
    ReUSLT_2 = Volume_shpere(Radius);

    cout << "the Are of shpere is = "<<ReUSLT_1 <<"\n" ;
    cout << "the Volume of shpere is = "<<ReUSLT_2 <<"\n" ;

    return 0;
}

double Are_shpere ( int Radius )
{
    double area ;
    area = 4 * PI * pow(Radius , 2 ) ;
    return area;
}

double Volume_shpere ( int Radius )
{
    double Volume ;
    Volume = 0.75 * PI * pow( Radius , 3 ) ;
    return Volume;
}
