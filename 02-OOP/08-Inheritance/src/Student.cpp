#include "Student.h"

Student::Student() : level(0) , GPA(0) , depart("un know")
{
    //ctor
    cout << "\n"<<"*********** default for Drive class :: student  ************ " << "\n";
}

Student::Student(string n , string g , float a ,int l , float GP , string d) : Person(n , g , a) , level(l) , GPA(GP) , depart(d)
{
    //ctor
    cout << "\n"<<"*********** parameterized for Drive class :: student  ************ " << "\n";
}

Student::~Student()
{
    //dtor
}

void Student:: set_level (int l )
{
    level = l ;
}

void Student:: set_GPA   (float GP)
{
    GPA = GP ;
}

void Student:: set_depart(string d)
{
    depart = d ;
}

int  Student:: get_level  ()
{
    return level ;
}

float  Student:: get_GPA    ()
{
    return GPA ;
}

string Student:: get_depart ()
{
    return depart ;
}

void Student:: display ()
{
    Person :: display() ;
    cout << endl<< "The Student BASIC DATA ::" << endl ;
    cout << "depart is " << depart << " , level = " << level << ", GPA = " << GPA  << endl;
}
