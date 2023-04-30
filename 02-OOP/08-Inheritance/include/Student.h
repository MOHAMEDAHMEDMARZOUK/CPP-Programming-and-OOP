#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <Person.h>
using namespace std;


class Student : public Person
{
    private:
        int level ;
        float GPA ;
        string depart ;

    public:
        void set_level (int   l );
        void set_GPA   (float GP);
        void set_depart(string d);
        int    get_level  ();
        float  get_GPA    ();
        string get_depart ();

        void display ();
        Student();
        Student(string n , string g , float a ,int l , float GP , string d);
        virtual ~Student();

    protected:


};

#endif // STUDENT_H
