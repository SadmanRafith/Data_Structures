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
