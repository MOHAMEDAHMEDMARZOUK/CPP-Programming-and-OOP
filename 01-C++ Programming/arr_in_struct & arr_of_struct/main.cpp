#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct student
{
    int ID         ;
    string name    ;
    float GPA = 0  ;
    float marks[5] ;
} ;

int main()
{
    student st[2] ;

    for (int i = 0 ; i < 2 ; i++)
    {

    cout << i+1 <<"-enter your ID \n ";
    cin >> st[i].ID ;
    cout << i+1 <<"-enter your name \n ";
    cin >> st[i].name ;
    for (int j = 0 ; j < 5 ; j++)
    {
        cout <<"-enter your mark of subjet " << j+1 << " \n ";
        cin >> st[i].marks[j] ;
        st[i].GPA += st[i].marks[j] ;
    }


    cout <<"\n\n ///////////////////////*********//////////////////// \n  \n" ;

    }


   for (int i = 0 ; i < 2 ; i++)
    {

    cout << i+1 <<"-your ID is "<< st[i].ID <<"\n ";
    cout <<"-your name is "<< st[i].name <<"\n ";
    cout <<"-your GPA is " << st[i].GPA / 100 <<"\n ";

    cout <<"\n\n ******************** \n  \n" ;

    }

    return 0;

}
