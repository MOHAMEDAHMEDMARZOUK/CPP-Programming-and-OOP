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

};

class Student
{
private:
        string depart ;
        string research_interest ;
public:

Student(string d , string re ): depart(d) , research_interest(re)
{
    cout << "\n"<<"*********** parameterized for Drive class :: Graduated student  ******** " << "\n \n";
}

void set_depart(string d)
{
    depart = d ;
}
void set_research_interest(string re)
{
    research_interest = re ;
}

string get_depart ()
{
    return depart ;
}

string get_research_interest()
{
    return research_interest ;
}


    void display ()
    {
        cout << endl<< "The Student BASIC DATA 2 ::" << endl ;
        cout << "depart is " << depart <<" , research interest is " << research_interest <<  endl;
    }



};

class TeachingAssistant : public Employee , public Student
{
public:
    TeachingAssistant(string n , string j , float s , string d , string re) : Employee( n , j , s ) , Student( d , re )
    {

    }

    void display()
    {
        Employee ::display();
        Student  ::display();
    }
};


int main()
{
    cout << "Hello world!" << endl;
    TeachingAssistant ta1("marzok" , "lectuer" , 12500 , "communication" , "Embedded System") ;
    ta1.display() ;
    cout << endl << endl;

    ta1.set_name("zoka");
    ta1.Employee::set_name("safa");
    ta1.display() ;


    return 0;
}
