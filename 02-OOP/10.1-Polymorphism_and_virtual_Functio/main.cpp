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

    virtual  float area()
    {
        cout << " parent class area : shape " << endl ;
        return 0 ;
    }

    virtual  void draw ()
    {
        cout << " Draw parent shape in  " << color << " color " << endl ;
    }

    virtual  void erasee ()
    {
        cout << " Erase The parent shape " << endl ;
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
// Functions Overriding using Virtual

    cout << "----------------- normal Functions Overriding -------------------- " << endl;

    shape sh("red");
    sh.area();
    cout << "\n \n";

    Rectangle r("green" , 6 , 3 );
    r.shape::area ();
    r.Rectangle::area() ;
    cout << "\n \n";

    circle c("orang" , 3 );
    c.shape::area ();
    c.circle::area() ;
    cout << "\n \n";

 // Functions Overriding using Virtual

    cout << "----------------- Functions Overriding using Virtual Functions -------------------- " << endl;

    shape* s_ptr = new shape("black");
    s_ptr -> area() ;
    s_ptr -> draw() ;
    cout << "\n \n";

    Rectangle re1("blue" , 4.5 , 2.3 ) ;
    s_ptr = &re1 ;
    s_ptr -> area();
    s_ptr -> draw() ;
    cout << "\n \n";

    circle ci ("white" , 2.1);
    s_ptr = &ci ;
    s_ptr -> area();
    s_ptr -> draw() ;
    cout << "\n \n";




    return 0;
}
