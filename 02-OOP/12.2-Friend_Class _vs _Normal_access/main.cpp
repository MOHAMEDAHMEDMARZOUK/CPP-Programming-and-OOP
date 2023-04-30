#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
        string name ;
        string job ;
        float  salary ;

public:

Employee( ) : name("undefined") , job("undefined") , salary(0.0)
{

}

Employee(string n , string j , float s ) : name(n) , job(j) , salary(s)
{

}

void set_name   (string n )
{
    name = n ;
}
void set_job (string j )
{
    job = j;
}
void set_salary    (float  s )
{
    salary = s ;
}
string get_name   ()
{
    return name ;
}
string get_job ()
{
    return job ;
}
float  get_salary ()
{
    return salary ;
}

void display ()
{
    cout << "The Employee BASIC DATA 1 ::" << endl;
    cout << "name is " << name << " , job is " << job << ", salary  = " << salary   << endl;
}


friend class printclass ;

};

class printclass
{
 public:

   void print(Employee emp )
     {
    cout << "The Employee Friend Class ::" << endl;
    cout << "name is " << emp.name << " , job is " << emp.job << ", salary  = " << emp.salary   << endl;
    }
};


int main()
{
    cout << "----------------------normal access --------------------" << endl<< endl;

    Employee em1("marzok" ,"SWE" , 14500) ;
    em1.display();
    cout <<endl<< endl;

    cout << "----------------------Friend Class --------------------" << endl<< endl;

    Employee em2;
    Employee em3("sasa" ,"digtial" , 12000);

    printclass pc;
    pc.print(em2);
    cout <<endl<< endl;
    pc.print(em3);
    cout <<endl<< endl;

    return 0;
}
