#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

int sum_3numbers (int num1 ,int num2 ,int num3 );
float averag_3numbers (int sum) ;

int main()
{
    int num1 ,num2 ,num3 ;
    double  ReUSLT_1 , ReUSLT_2 ;

    cout << "enter 3 numbers \n" ;
    cin >> num1 >> num2 >> num3  ;

    ReUSLT_1 = sum_3numbers (num1 ,num2 ,num3 );
    ReUSLT_2 = averag_3numbers (ReUSLT_1) ;

    cout << "the sum of 3 numbers is = "<<ReUSLT_1 <<"\n" ;
    cout << "the average of 3 numbers is = "<<ReUSLT_2 <<"\n" ;

    return 0;
}

int sum_3numbers (int num1 ,int num2 ,int num3 )
{
    return (num1 + num2 + num3) ;
}

float averag_3numbers (int sum)
{
    return ( (float)sum / 3 );
}
