#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct employee
{
    int emp_num  ;
    string fname ;
    string job   ;
    float salary ;
    float bonus  ;
    float net_salary ;

} ;

void accept_data(employee emp[] , int siz);
void print_data (employee emp[] , int siz);

int set_salary(string job_postion);
int set_bonus (string job_postion);



int main()
{
    employee emp[5] ;

    accept_data ( emp , 5 ) ;
    print_data  ( emp , 5 ) ;



 return 0;

}


void accept_data(employee emp[] , int siz)
{
    for (int i = 0 ; i < siz ; i++)
    {
        cout <<"\n///////////////////////////////////////////\n\n"<<i+1 ;
        cout <<"-enter the employees number \n ";
        cin >> emp[i].emp_num ;
        cout <<"-enter the employees first name \n ";
        cin >> emp[i].fname ;
        cout <<"-enter the employee job name ( man - eng - clr - non) \n ";
        cin >> emp[i].job;

        emp[i].salary = set_salary(emp[i].job) ;
        emp[i].bonus  = set_bonus (emp[i].job) ;

        emp[i].net_salary = emp[i].salary + emp[i].bonus ;
    }

}

void print_data (employee emp[] , int siz)
{
    cout <<" //**************************************************\\ \n" ;
    cout <<" //**************************************************\\ \n" ;
    cout <<" //**************************************************\\ \n" ;

    for (int i = 0 ; i < siz ; i++)
    {
        cout <<"\n///////////////////////////////////////////\n\n"<<i+1 ;

        cout <<"- your number is " << emp[i].emp_num << "\n "<<"- your name  is " << emp[i].fname << "\n ";
        cout <<"- your job name titel " << emp[i].job << "\n ";
        cout <<"- your total salary = " << emp[i].net_salary << "\n ";
    }
}

int set_salary(string job_postion)
{
    if      (job_postion == "man") { return 5000 ; }
    else if (job_postion == "eng")     { return 3000 ; }
    else if (job_postion == "clr")     { return 2000 ; }
    else                               { return 1000 ; }
}

int set_bonus (string job_postion)
{
    if      (job_postion == "manager") { return 500 ; }
    else if (job_postion == "eng")     { return 300 ; }
    else if (job_postion == "clr")     { return 200 ; }
    else                               { return 100 ; }
}
