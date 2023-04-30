#include <iostream>
#include <string>
#include "calculator.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
   /* calculator math ;

    cout << "aaa! " << math.add(56 , 89) << endl;
    cout << "bbb! " << math.add(35.96 , 65.23 )<< endl;
    cout << "ccc! " << math.add(15 , 67 ,34 )  << endl;
    cout << "ddd! " << math.add("mo " ," zoka")<< endl; */

    calculator math(45.9 , 3.6732) ;
    calculator st("mo " , "zoka") ;

    cout << "bbb! " << math.add()<< endl;
    cout << "GGG! " << st.add_st()  << endl;


    return 0;
}
