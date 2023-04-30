#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct employee
{
    int emp_num  ;
    string fname ;
    string lname ;
    int salary ;
    int bouns ;
    float net_salary ;

} ;

int main()
{
    employee e1[5] ;

    for (int i = 1 ; i < 3 ; i++)
    {

    cout << i <<"-enter the employees number \n ";
    cin >> e1[i].emp_num ;
    cout <<"-enter the employees first name \n ";
    cin >> e1[i].fname ;
    cout <<"-enter the employees last name \n ";
    cin >> e1[i].lname ;
    cout <<"-enter the employees salary \n ";
    cin >> e1[i].salary ;
    cout <<"-enter the employees bonus \n ";
    cin >> e1[i].bouns ;

    e1[i].net_salary = e1[i].salary + e1[i].bouns ;

    }
cout <<"\n\n ////////////////////////////////////////////////////////////////////\n\n" ;
    for (int i = 1 ; i < 3 ; i++)
    {

    cout <<i <<"- the employees number = " << e1[i].emp_num << "\n" ;
    cout <<"- the employees name is " << e1[i].fname << " " << e1[i].lname << "\n" ;
    cout <<"- the employees salary = " << e1[i].salary << "\n" ;
    cout <<"- the employees bonus = " << e1[i].bouns << "\n" ;
    cout <<"- the employees net salary  = " << e1[i].net_salary << "\n" ;
    cout <<" //**************************************************\\ \n" ;

    }
    return 0;

}
