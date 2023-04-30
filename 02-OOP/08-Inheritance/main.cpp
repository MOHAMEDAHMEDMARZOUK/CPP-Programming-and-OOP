#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Graduatedstudent.h"

using namespace std;

int main()
{
    cout << "//////////////  case 2  video (16 , 17 , 18 fun overriding ) \\\\\\\\\\\\\\\\" << endl;

 // default for Base class  :: Person
     Person p0;

 //parameterized for Base class  :: Person
    Person p1("zokaa" , "male" ,23);
    p1.display();

 // default for Base class  :: Person
 // default for Drive class :: student

    Student s1;
    s1.display();
    cout << endl << endl;

    s1.set_name("mo") ;
    s1.set_gender("male") ;
    s1.set_age(24) ;

    s1.display();
    cout << endl << endl;

    cout << s1.get_name() << endl;
    cout << s1.get_gender()  << endl;
    cout << s1.get_age()  << endl;

//  parameterized for Base class  :: Person
//  parameterized for Drive class :: student

    Student s2("soso" , "fmale" , 23 , 4 , 3.8 , "communication" );

    s2.display();
    cout << endl << endl;

    cout << s2.get_name() << "\t" << s2.get_gender()  << endl;
    cout << s2.get_age()  << "\t" << s2.get_level()   << endl;
    cout << s2.get_GPA()  << "\t" << s2.get_depart()  << endl;

    cout << endl<< "////////////// video (19 :: Multiple Inheritance in C++ ) \\\\\\\\\\\\\\\\" << endl;

    Graduatedstudent gs1;
    gs1.display();
    cout << endl << endl;

    gs1.set_name("mo") ;
    gs1.set_gender("male") ;
    gs1.set_age(24) ;
    gs1.set_depart("medicn");
    gs1.set_GPA(7.5);
    gs1.set_level(6);
    gs1.set_research_interest("RPA UIPATH");

    gs1.display();
    cout << endl << endl;

    cout << gs1.get_name() << "\t" << gs1.get_gender()  << endl;
    cout << gs1.get_age()  << "\t" << gs1.get_level()   << endl;
    cout << gs1.get_GPA()  << "\t" << gs1.get_depart()  << endl;
    cout << gs1.get_research_interest()  << endl;

    Graduatedstudent gs2("mohamed" ,"male" , 23 , 5 , 4.5 ,"communication" , "Embedded systems " );
    gs2.display();
    cout << endl << endl;



    return 0;
}
