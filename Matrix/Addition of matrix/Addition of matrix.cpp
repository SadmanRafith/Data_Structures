/*
This program takes two matrices of order r*c and stores it in two-dimensional array. Then, the program adds these two matrices and displays it on the screen.
In this program, user is asked to entered the number of rows r and columns c. The value of r and c should be less than 100 in this program.

The user is asked to enter elements of two matrices (of order r*c).

Then, the program adds these two matrices, saves it in another matrix (two-dimensional array) and displays it on the screen.
*/
#include<iostream>
using namespace std;

int main()
{
    int row;
    int col;
    int a[100][100],b[100][100],sum[100][100];
    cout<< "Enter the number of row's: ";
    cin>>row;
    cout<< "Enter the number of column's: ";
    cin>>col;
    cout<<endl;

    cout<< "Enter elements of 1st matrix: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col;j++)
        {
            cout<<"Enter elements of a"<<i+1<<j+1<< " : ";
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<< "Enter elements of 2nd matrix: "<<endl;;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col;j++)
        {
            cout<<"Enter elements of b"<<i+1<<j+1<< " : ";
            cin>>b[i][j];
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];

        }
    }
    cout<< "\n***********************";
    cout<< "\nSum of two matrix: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<< sum[i][j]<< " ";
            if(j==col-1)
                cout<<endl;

        }
    }
}
