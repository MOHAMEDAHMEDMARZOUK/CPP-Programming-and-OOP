#include <iostream>
#include <cmath>

using namespace std;

void swap_2num (int &num1 ,int &num2 );

int main()
{
    int num1 ,num2  ;

    cout << "enter 2 numbers to swap \n" ;
    cin >> num1 >> num2  ;

    swap_2num ( num1 , num2);
    cout << "the numbers after swap is num1 = " << num1 <<"\n" ;
    cout << "the numbers after swap is num2 = " << num2 <<"\n" ;


    return 0;
}

void swap_2num (int &num1 ,int &num2 )
{
    int temp ;
    temp = num1 ;
    num1 = num2 ;
    num2 = temp ;
}
