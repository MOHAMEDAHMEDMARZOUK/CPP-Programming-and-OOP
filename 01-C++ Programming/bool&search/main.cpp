#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool searching ( int markes[] ,  int siz , int num_seach);
int main()
{
    int mar [10] ;
    int num ;
    for ( int i = 0 ; i < 10 ; i++)
    {
        cout << i+1 <<"-enter the mark of sub \n ";
        cin >> mar[i] ;
    }

    cout <<"-enter the num_seach \n ";
    cin >> num ;


   cout <<"the result of searching " << searching( mar , 10 , num ) <<"\n " ;


    return 0;

}

bool searching ( int markes[] ,  int siz , int num_seach)
{
    float sum = 0 ;
    for ( int i = 0 ; i < siz ; i++)
    {
        if ( markes[i] == num_seach )
        {
            return true ;
        }
     }

    return false ;

}
