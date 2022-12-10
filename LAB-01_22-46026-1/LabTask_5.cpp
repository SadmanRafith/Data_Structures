/* MD. TAHSIN HASIB 22-46026-1

------------------------ Lab Task - 5 ------------------------

Write a program to perform matrix addition between 3 matrices.

*/


#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
    cout << "\n-----------------------------------------\n";

    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];
    int sum_mat[3][3];

    int i,j;

    cout << "\nEnter values for first matrix: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin >> mat1[i][j];
        }
    }

    cout << "\nEnter values for second matrix: \n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> mat2[i][j];
        }
    }

    cout << "\nEnter values for third matrix: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin >> mat3[i][j];
        }
    }

    //for addition of matrices
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            sum_mat[i][j] = mat1[i][j] + mat2[i][j] + mat3[i][j];   //operation
        }
    }

    cout << "\n-----------------------------------------\n";
    cout << "\nSample Output: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout << sum_mat[i][j] << " ";   //display
        }
        cout << "\n";
    }

    getch();
}
