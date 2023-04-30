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
    employee e1 , e2 ;

    cout <<"-enter the employees number \n ";
    cin >> e1.emp_num ;
    cout <<"-enter the employees first name \n ";
    cin >> e1.fname ;
    cout <<"-enter the employees last name \n ";
    cin >> e1.lname ;
    cout <<"-enter the employees salary \n ";
    cin >> e1.salary ;
    cout <<"-enter the employees bouns \n ";
    cin >> e1.bouns ;

    e1.net_salary = e1.salary + e1.bouns ;

    cout <<"- the employees number = " << e1.emp_num << "\n" ;
    cout <<"- the employees first name is " << e1.fname << "\n" ;
    cout <<"- the employees last name  is " << e1.lname << "\n" ;
    cout <<"- the employees salary = " << e1.salary << "\n" ;
    cout <<"- the employees bouns = " << e1.bouns << "\n" ;
    cout <<"- the employees net salary  = " << e1.net_salary << "\n" ;


    return 0;

}
