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

    static int counter ;

public:
        void setmaker (string make);
        void setclour (string clo );
        void setmodel (double year);

        string getmaker  ();
        string getcloure ();
        double getmodel  ();
        int    getcounte ();

        car();
        virtual ~car();

};

#endif // CAR_H
