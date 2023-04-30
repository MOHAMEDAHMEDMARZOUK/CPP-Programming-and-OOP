#include <iostream>
#include <string>
using namespace std;


class Employee
{

private:
        string name ;
        int  EMP_ID ;
        double  salary ;

public:

Employee() : name("unknow") , EMP_ID(0) , salary(0.0) {}

Employee(string n , int id , double s ) :     name(n) , EMP_ID(id) , salary(s) {}

virtual double get_totalsalary () = 0 ;

virtual void print()
{
    cout << "The Employee BASIC DATA 1 ::" << endl;
    cout << "name is " << name << " , EMP ID = " << EMP_ID << ", salary  = " << salary   << endl;
}

friend class Sales ;
friend class Engineer;
};


class Sales : public Employee
{

private:
        float Goss_sales ;
        float Commission_rate ;

public:

Sales() : Employee() , Goss_sales(0.0) , Commission_rate(0.0) {}

Sales(string n , int id , double s , float GS , float CR ) : Employee(n , id , s ) , Goss_sales(GS) , Commission_rate(CR)  {}

double get_totalsalary ()
{
    return salary + (Goss_sales * Commission_rate ) ;
}

void set_Goss_sales(float GS )
{
    Goss_sales = GS ;
}

void set_Commission_rate(float CR )
{
    Commission_rate = CR ;
}


void print()
{
    Employee ::print();
    cout << endl<< "The Sales DIRVIE DATA  ::" << endl;
    cout << "Goss sales = " << Goss_sales << "  , Commission rate = " << Commission_rate  << endl;
}

};


class Engineer : public Employee
{

private:
        string depart ;
        int exp_year ;
        float overtime_hours ;
        float overtime_hours_rate ;

public:

Engineer() : Employee() , depart("undefine") , exp_year(0) , overtime_hours(0.0) , overtime_hours_rate(0.0) {}

Engineer(string n , int id , double s , string d , int years , float hours , float hours_rate ) : Employee(n , id , s ) , depart(d) , exp_year(years) , overtime_hours(hours) , overtime_hours_rate(hours_rate)  {}

void set_overtime_hours(float hours )
{
    overtime_hours = hours ;
}

void set_overtime_hours_rate(float hours_rate )
{
    overtime_hours_rate = hours_rate ;
}


double get_totalsalary ()
{
    return salary + (overtime_hours * overtime_hours_rate ) ;
}

void print()
{
    Employee ::print();
    cout << endl<< "The Engineer DIRVIE DATA  ::" << endl;
    cout << "depart is " << depart << "   , exp_year = " << exp_year<< endl<<"overtime hours = " << overtime_hours << "  , overtime hours rate = " << overtime_hours_rate  << endl;
}

};


int main()
{
    cout << "----------------------Friend Class Sales --------------------" << endl<< endl;

    Sales s1;
    s1.print();
    cout << "the total salary of employee " << s1.get_totalsalary() ;
    cout <<endl<< endl;


    Sales s2("abdo", 1995 , 5500 , 158500 , .09 );
    s2.print();
    cout << "the total salary of employee " << s2.get_totalsalary() ;
    cout <<endl<< endl;

    s2.set_Goss_sales(25000) ;
    s2.set_Commission_rate(.1);
    cout << "the total salary of employee " << s2.get_totalsalary() ;
    cout <<endl<< endl;


    cout << "----------------------Friend Class Engineer --------------------" << endl<< endl;
    Engineer e1;
    e1.print();
    cout << "the total salary of Engineer = " << e1.get_totalsalary() ;
    cout <<endl<< endl;

    Engineer e2("marzok" , 1999 , 14000 , "ESWE" , 1 , 50 , 150 );
    e2.print();
    cout << "the total salary of Engineer = " << e2.get_totalsalary() ;
    cout <<endl<< endl;

    e2.set_overtime_hours(63.5);
    e2.set_overtime_hours_rate(250);
    cout << "the total salary of Engineer = " << e2.get_totalsalary() ;
    cout <<endl<< endl;


    return 0;
}
