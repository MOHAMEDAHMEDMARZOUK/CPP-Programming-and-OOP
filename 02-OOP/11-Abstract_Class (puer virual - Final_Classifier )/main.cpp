#include <iostream>
#include <string>
using namespace std;

class shape
{
private:
    string color ;

public:
    shape (string c ) : color(c)
    { cout << "\n"<<"*********** for Base class  :: shape *************** " << "\n"; }

    virtual  float area() = 0 ;

    virtual  void draw () = 0 ;

    virtual  void erasee () = 0 ;

    virtual  void display () final
    {
        cout <<"dfkkl" ;
    }

};

class Rectangle : public shape
{
private:
    float length ;
    float width  ;

public:
    Rectangle (string c , float l , float w) : shape(c) , length(l) , width(w)
    { cout <<"*********** for Drive class :: Rectangle  ************ " << "\n \n";  }

    float area()
    {
        cout << " Rectangle class area : length * width = " << length * width << endl ;
        return length * width ;
    }

    void draw ()
    {
        shape ::draw();
        cout << " Draw Rectangle  " << endl ;
    }

    void erasee ()
    {
        cout << " The Rectangle Erase " << endl ;
    }

};

class circle : public shape
{
private:
    float redius ;

public:
    circle (string c , float r ) : shape(c) , redius(r)
    { cout <<"*********** for Drive class :: circle  ************ " << "\n \n";  }

    float area()
    {
        cout << " circle class area : 3.14 * redius ^ 2  = " << 3.14 * (redius * redius) << endl ;
        return 3.14 * (redius * redius) ;
    }

    void draw ()
    {
        shape ::draw();
        cout << " Draw circle  " << endl ;
    }

    void erasee ()
    {
        cout << " The circle Erase " << endl ;
    }

};



int main()
{
    cout << "Hello world!" << endl;
    //shape s("lll") ; cannot declare variable 's' from abstract class type 'shape'|

   //circle c("kk",0); cannot declare variable 'c' because the virtual functions are pure within 'circle' virtual void shape::erasee()'|

   // cannot use  virtual functions  with final to any dri

    return 0;
}
