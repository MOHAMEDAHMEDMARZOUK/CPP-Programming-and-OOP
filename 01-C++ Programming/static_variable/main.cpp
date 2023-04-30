#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void issue_ticket (int  ticket_numbers , string name );

int main()
{
    string name ;
    int coun = 0 ;

    while( 1 )
    {
       cout <<" enter your name as written in your passport \n" ;
       cin >> name ;
       issue_ticket ( 12 , name ) ;
       coun ++ ;
       if ( coun == 12 ) {

           cout <<" enter your name as written in your passport \n" ;
           cin >> name ;
           break ;}
    }

    cout <<" tickets completed \n" ;

    return 0;
}

void issue_ticket (int  ticket_numbers , string name )
{
    static int your_ticket_num = 0 ;

    cout <<"\t ********************************* \n" ;
    cout <<" ticket numbers  : " << ticket_numbers << "\n" ;
    cout <<" your ticket num : " << ++your_ticket_num << "\n" ;
    cout <<" ticket for      : " << name << "\n\n\n\n" ;

}
