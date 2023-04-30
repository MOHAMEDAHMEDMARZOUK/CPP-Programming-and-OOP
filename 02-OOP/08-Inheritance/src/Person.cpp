#include "Person.h"

Person:: Person() : name("undefined") , gender("un know") , age(0)
{
    //ctor
    cout << "\n \n"<<"*********** default for Base class  :: Person   ************ " << "\n";
}


Person:: Person(string n , string g , float a ) : name(n) , gender(g) , age(a)
{
    cout << "\n \n"<<"*********** parameterized for Base class  :: Person   ************ " << "\n";
}

Person::~Person()
{
    //dtor
}

void  Person:: set_name   (string n )
{
    name = n ;
}

void  Person:: set_gender (string g )
{
    gender = g ;
}

void  Person:: set_age    (float  a )
{
    age = a ;
}


string Person:: get_name   ()
{
    return name ;
}

string Person:: get_gender ()
{
    return gender ;
}

float  Person:: get_age    ()
{
    return age ;
}

void Person:: display ()
{
    cout << "The Person BASIC DATA ::" << endl;
    cout << "name is " << name << " , gender is " << gender << ", age = " << age  << endl;
}

