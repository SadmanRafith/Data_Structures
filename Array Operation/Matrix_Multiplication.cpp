#include<iostream>
#include<conio.h>
using namespace std;

int main()
{   
    int Matrix_1[3][3] = {{1,6,7},
                          {2,4,8},
                          {3,1,9}};

    int Matrix_2[3][3] = {{1,6,7},
                          {2,4,8},
                          {3,1,9}};

    int Product_Matrix[10][10];


    int r1=3, c1=3;
    int r2=3, c2=3;



    if(c1!=r2){
        cout << "\nColumn of first matrix should be equal to the row of the second matrix: \n";
    }
    else{
        cout << "\nMatrix 1 below: \n";
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                cout << Matrix_1[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "\nMatrix 2 below: \n";
        for(int i=0; i<r2; i++){
            for(int j=0; j<c2; j++){
                cout << Matrix_2[i][j] << " ";
            }
            cout << "\n";
        }

        //matrix multiplication
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                Product_Matrix[i][j]=0;
            }
        }

        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                for(int k=0; k<c1; k++){
                    Product_Matrix[i][j] += Matrix_1[i][k] * Matrix_2[k][j];
                }
            }
        }

        cout << "\nPrduct of two matrix is: \n";
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                cout << Product_Matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }
    
    getch();

}