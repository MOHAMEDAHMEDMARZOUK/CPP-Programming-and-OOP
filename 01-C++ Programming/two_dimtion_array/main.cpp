#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main()
{
    int mar [5][3] ;
    int daugon = 0 , sum = 0 ;
    for ( int i = 0 ; i < 5 ; i++)
    {
        for ( int z = 0 ; z < 3 ; z++)
        {
        cout << i+1 <<"." << z+1 <<"-enter the mark of sub \n ";
        cin >> mar[i][z] ;
        sum +=  mar[i][z] ;

        if ( i == z )
        {
            daugon += mar[i][z]  ;
        }
        }
    }

    cout <<"\n- the sum of matrex = " << sum << "\n";
    cout <<"- the daugon of matrex =  " << daugon ;



    return 0;

}
