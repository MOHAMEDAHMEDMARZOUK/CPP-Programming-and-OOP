#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void print_matrix(int mat[][4] , int rows);

int main()
{
    int arr[5][4] ;

     for (int i = 0 ; i < 5 ; i++)
    {
        for (int j = 0 ; j < 4 ; j++)
        {
          cout << i+1 << "." << j+1 <<"-enter the element of matrix \n ";
          cin >> arr[i][j] ;
        }
    }

    print_matrix( arr , 5 );
    return 0;

}

void print_matrix(int mat[][4] , int rows)
{
    cout <<"\nthe matrix numbers is ::\n\n";
    for (int i = 0 ; i < rows ; i++)
    {
        for (int j = 0 ; j < 4 ; j++)
        {
            cout << mat[i][j] << "\t\t";
        }
        cout << "\n";
    }

}
