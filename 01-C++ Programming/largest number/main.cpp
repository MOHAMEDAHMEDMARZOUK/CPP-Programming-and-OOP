#include <iostream>

using namespace std;


// function return the largest number

int largest_number ( int frist_num , int scend_num );

int main()
{
    int x , y , ReUSLT ;
    cout << "enter two number to get the largest\n" ;
    cin >> x >> y ;

    ReUSLT = largest_number (x , y );
    cout << "the largest of two number is = "<<ReUSLT <<"\n" ;

    return 0;
}

int largest_number ( int frist_num , int scend_num )
{
    // we can use the default values ( frist_num & scend_num )
    int x , y ;
    x = frist_num ;
    y = scend_num ;

    if ( x > y ) {return x ;}
    else {return y ;}
}
