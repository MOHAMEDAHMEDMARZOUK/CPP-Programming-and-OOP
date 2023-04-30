#ifndef GRADUATEDSTUDENT_H
#define GRADUATEDSTUDENT_H

#include <iostream>
#include <string>
#include <Student.h>
using namespace std;

class Graduatedstudent : public Student
{
    private:
        string research_interest ;

    public:

Graduatedstudent(string n , string g , float a ,int l , float GP , string d , string re )
       : Student(n,g,a,l,GP,d) , research_interest(re)
{
    cout << "\n"<<"*********** parameterized for Drive class :: Graduated student  ******** " << "\n \n";
}

        void set_research_interest(string re)
        {
           research_interest = re ;
        }
        string get_research_interest()
        {
            return research_interest ;
        }
    void display ()
    {
        Student::display();
        cout << endl<< "The Graduatedstudent BASIC DATA :: research interest is " << research_interest <<  endl;
    }

        Graduatedstudent() ;
        virtual ~Graduatedstudent();


    protected:


};

#endif // GRADUATEDSTUDENT_H
