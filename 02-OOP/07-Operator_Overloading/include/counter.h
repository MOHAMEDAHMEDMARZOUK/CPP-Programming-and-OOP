#ifndef COUNTER_H
#define COUNTER_H

#include <iostream>
#include <string>
using namespace std;

class counter
{
    private:
        int coun ;
    public:

        int getcounter ();

        counter();
        counter(int c);
        virtual ~counter();

 //  Overloading Unary Operators ::
     /*  pre - increment (++X) or (--X) */

        counter operator++ ()
        {
            ++coun ;
            return counter(coun) ;
        }

        counter operator-- ()
        {
            --coun ;
            return counter(coun) ;
        }

    /*  post - increment (X++) or (X--) */

        counter operator++ (int)
        {
            coun++ ;
            return counter(coun) ;
        }

        counter operator-- (int)
        {
            coun-- ;
            return counter(coun) ;
        }



    protected:


};

#endif // COUNTER_H
