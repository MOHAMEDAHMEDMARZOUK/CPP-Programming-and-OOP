#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void swap_num( int *x , int *y);

int main()
{
    int x = 39 ,y = 67 ;
    cout << "x befor = "<< x << endl << "y befor = "<< y <<endl ;

    swap_num( &x , &y);
    cout << "x after = "<< x << endl << "y after = "<< y ;

    return 0;

}

void swap_num( int *x , int *y)
{
    int teamp ;
    teamp = *x ;
    *x = *y ;
    *y = teamp ;
}
