#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person
{
    private:
        string name ;
        string gender ;
        float  age ;

    public:
        void set_name   (string n );
        void set_gender (string g );
        void set_age    (float  a );
        string get_name   ();
        string get_gender ();
        float  get_age    ();

        void display ();
        Person();
        Person(string n , string g , float a );
        virtual ~Person();

    protected:


};

#endif // PERSON_H
