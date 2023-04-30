#include <iostream>
#include <cmath>
#include <string>
using namespace std;

#ifndef CAR_H
#define CAR_H


class car
{
private :
    string maker_name ;
    string clour ;
    double year_model ;

public:
        void setmaker (string make);
        void setclour (string clo );
        void setmodel (double year);

        string getmaker  ();
        string getcloure ();
        double getmodel  ();

        car(string m , string c , double y );

        virtual ~car();

};

#endif // CAR_H
