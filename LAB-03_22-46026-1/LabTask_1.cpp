/* MD.TAHSIN HASIB 22-46026-1
    
    Write a C++ program to initialize two matrices of 5 x 5 and 5 x 6 (row x column) 
    sizes. Multiply them, then find the transpose matrix of it.

*/


#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    cout << "\n--------------------------------------------------\n";

    int Matrix_1[5][5] = {{1,0,0,0,0},
                          {2,0,0,0,0},
                          {3,0,0,0,0},
                          {4,0,0,0,0},
                          {5,0,0,0,0}};

    int Matrix_2[5][6] = {{1,0,0,0,0,0},
                          {1,0,0,0,0,0},
                          {1,0,0,0,0,0},
                          {1,0,0,0,0,0},
                          {1,0,0,0,0,0}};


    int Product_Matrix[5][6];

    int r1=5, c1=5;
    int r2=5, c2=6;

    if(c1!=r2){
        cout << "\nMatrix cannot be multiplied!";
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

        //multiplication
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

        cout << "\n--------------------------------------------------\n";

        cout << "\nProduct of two Matrix is: \n";
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                cout << Product_Matrix[i][j] << " ";
            }
            cout << "\n";
        }


    }

    cout << "\n--------------------------------------------------\n";

    //for transpose
    cout << "\nTranspose Matrix: \n";
    int Trans_Mat[10][10];

    int trow = 5;
    int tcol = 6;

    for(int i=0; i<trow; i++){
        for(int j=0; j<tcol; j++){
            Trans_Mat[j][i] = Product_Matrix[i][j];
        }
    }

    for(int i=0; i<tcol; i++){
        for(int j=0; j<trow; j++){
            cout << Trans_Mat[i][j] << " ";
        }
        cout << "\n";
    }

    getch();
}