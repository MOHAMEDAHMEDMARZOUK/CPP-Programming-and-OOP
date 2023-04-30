#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void swap_num( int *x , int *y);

int main()
{
    int x = 39 ,y = 67 ;
    cout << "x befor = "<< x << endl << "y befor = "<< y <<endl ;

    swap_num( &x , &y);
    cout << "x after = "<< x << endl << "y after = "<< y ;

    return 0;

}

void swap_num( int *x , int *y)
{
    int teamp ;

    teamp = *x ;
    *x = *y ;
    *y = teamp ;
}

/*



////// ex of arrays  ////////////////////
int main()
{
    float salary [10] ;
    float ave = 0 ;

    for ( int i = 0 ; i < 10 ; i++)
    {
        cout << i+1 <<"-enter the employees salary \n ";
        cin >> salary[i] ;
        salary[i]+= salary[i] * .10 ;
        ave += salary[i] ;
    }

    for ( int i = 0 ; i < 10 ; i++)
    {
        cout <<"-enter the employees salary " << salary[i] <<"\n " ;

    }

    cout <<"the average of employees salary " << ave / 10 <<"\n " ;

    return 0;
}

//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

int sum_3numbers (int num1 ,int num2 ,int num3 );
float averag_3numbers (int sum) ;

int main()
{
    int num1 ,num2 ,num3 ;
    double  ReUSLT_1 , ReUSLT_2 ;

    cout << "enter 3 numbers \n" ;
    cin >> num1 >> num2 >> num3  ;

    ReUSLT_1 = sum_3numbers (num1 ,num2 ,num3 );
    ReUSLT_2 = averag_3numbers (ReUSLT_1) ;

    cout << "the sum of 3 numbers is = "<<ReUSLT_1 <<"\n" ;
    cout << "the average of 3 numbers is = "<<ReUSLT_2 <<"\n" ;

    return 0;
}

int sum_3numbers (int num1 ,int num2 ,int num3 )
{
    return (num1 + num2 + num3) ;
}

float averag_3numbers (int sum)
{
    return ( (float)sum / 3 );
}

///////////////////////////////////////////////////////////////////////////////////////


// function return the largest number

int largest_number ( int frist_num , int scend_num );

int main()
{
    int x , y , ReUSLT ;
    cout << "enter two number to get the largest\n" ;
    cin >> x >> y ;

    ReUSLT = largest_number (x , y );
    cout << "the largest of two number is = "<<ReUSLT <<"\n" ;

    return 0;
}

int largest_number ( int frist_num , int scend_num )
{
    // we can use the default values ( frist_num & scend_num )
    int x , y ;
    x = frist_num ;
    y = scend_num ;

    if ( x > y ) {return x ;}
    else {return y ;}
}



///////////////////////////////////////////////////////////////////////


// built in fun

int i = -5 ;
double x = 5 , y = 2 , z = 9.21 ;



    cout << " the abs of the num =[ " << abs(i) <<" ] \n";
    cout << " the power of the x to y (5,2) =[ " << pow(x,y) <<" ] \n";
    cout << " the floor of the z =[ " << floor(z) <<" ] \n";
    cout << " the ceil of the z =[ " << ceil(z) <<" ] \n";
    cout << " the squer of the z =[ " << sqrt(z) <<" ] \n";


//////////////////////////////////////////////////////////////////////////////////////
int  fac = 1  ;
    cout << "enter number to get his fact \n" ;
for (int number = 1 ; number <= 10 ; number++ )
{

  for (int i = 1 ; i <= number ; i++ )
   {
     fac *= i ;
   }
  cout << "the fac of num "<< number << " is " << fac <<"\n" ;
}


///////////////////////////////////////////////////////////////////////////////
int num , fac = 1  ;
    cout << "enter number to get his fact \n" ;
    cin >> num ;

    for (int i = 1 ; i <= num ; i++ )
  {
    fac *= i ;
  }
  cout << "the fac num is "<< fac<<"\n" ;

  /////////////////////////////////////////////////////////////////


int num ,sumeven = 0 , sumodd = 0  ;
    cout << "enter 10 numbers \n" ;
    for (int i = 1 ; i < 11 ; i++ )
  {
    cout << "enter num" <<i<<"\n" ;
     cin >> num ;

    if (num % 2 == 0)
    {
        sumeven += num ;

    }
    else{sumodd += num ;}
  }
  cout << "the sumeven num is "<< sumeven<<"\n" ;
  cout << "the sumodd num is "<< sumodd<<"\n" ;


/////////////////////////////////////////////////////////////////////////////////
  float ave = 0, num ;
  cout << "enter degree of 6 student \n" ;

  for (int i = 1 ; i < 7 ; i++ )
  {
      cout << "enter student grad num" <<i<<"\n" ;
      cin >> num ;

      ave += num ;

  }

  cout << "ave of degree of 6 student = " << ave / 6 ;

/////////////////////////////////////////////////////////////////////////////////////////////

int mar1 , age ;

  char m_u , sex  ;

  cout << " inter your m_u ( married , single ) \n inter your sex ( male , fmale ) \n inter your age\n"   ;
  cin >> m_u >> sex  >> age ;

  if ( m_u == 'm' || ( m_u == 's' && sex == 'm' && age > 35 ) || ( m_u == 's' && sex == 'f' && age > 25 ) )
  {
      cout << " don " ;
  }

  else
  {
      cout << "siiiiiiu ";
  }

*/
