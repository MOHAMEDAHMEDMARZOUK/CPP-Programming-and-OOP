#include <iostream>
#include <cmath>
#include <string>
using namespace std;

float GPA ( int markes[] ,  int siz);

int main()
{
    int mar [10] ;
    for ( int i = 0 ; i < 10 ; i++)
    {
        cout << i+1 <<"-enter the mark of sub \n ";
        cin >> mar[i] ;
    }

   // float ave = GPA ( mar , 10 ) ;
  //  cout <<"the average of markes " << ave <<"\n " ;

   cout <<"the average of markes " << GPA( mar , 10 ) <<"\n " ;


    return 0;

}

float GPA ( int markes[] ,  int siz)
{
    float sum = 0 ;
    for ( int i = 0 ; i < siz ; i++)
    {
        sum = sum + markes[i] ;
    }

    return sum * 5 / 1000 ;
}
