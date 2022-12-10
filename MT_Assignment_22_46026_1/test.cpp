/* MD.TAHSIN HASIB 22-46026-1

    //Functions for 1D array
    -------------------------
    print1DArray(int *array, int size)
    reversePrint1DArray(int *array, int size)
    input1DArray(int *array, int size)
    searchIn1DArray(int *array, int size, int searchKey)
    findMax1DArray(int *array, int size)
    findMin1DArray(int *array, int size)
    copy1DArray(int *sourceArray, int *destinationArray, int size)


    //Functions for 2D array
    ----------------------------
    print2DArray(int **array, int size)
    reversePrint2DArray(int **array, int size)
    input2DArray(int **array, int size)
    searchIn2DArray(int **array, int size, int searchKey)
    findMax2DArray(int **array, int size)
    findMin2DArray(int **array, int size)
    copy2DArray(int **sourceArray, int **destinationArray, int size)
*/

#include<iostream>
#include"arrayImplement.h"

using namespace std;

int main()
{
    
    //for 1D Array
    cout << "\n";
    int size1D;

    cout << "Enter the 1D Array size: ";
    cin >> size1D;

    int sourceArray1D[size1D];   

    int copysize1D=50;
    int destinationArray1D[copysize1D];
     
    input1DArray(sourceArray1D, size1D);

    int searchKey1D;
    cout << "Enter a key to search in 1D Array: ";
    cin >> searchKey1D;

    cout << "------------------------------------------------\n";
    cout << "-------------------Output-----------------------\n";
    print1DArray(sourceArray1D, size1D);
    reversePrint1DArray(sourceArray1D, size1D);
    searchIn1DArray(sourceArray1D, size1D, searchKey1D);
    findMax1DArray(sourceArray1D, size1D);
    findMin1DArray(sourceArray1D, size1D);
    copy1DArray(sourceArray1D, destinationArray1D, size1D);


    cout << "\n";
    cout << "----------------------------------------------------------------------------------------\n";

    //for 2D Array
    int size2D;

    cout << "Enter the 2D Array size n (where n x n): ";
    cin >> size2D;

    int **sourceArray2D = new int *[size2D];

    int **destinationArray2D = new int *[size2D];

    /*  
        int copysize2D=50;
        int **destinationArray2D = new int *[copysize2D];

        The above declaration was for built in copy function
    */

    
    for(int i=0; i<size2D; i++){                        //for manually copying
        destinationArray2D[i]=new int[size2D];          //this is for dinamically memory allocation for col
    }



    input2DArray(sourceArray2D, size2D);

    int searchKey2D;
    cout << "Enter a key to search in 2D Array: ";
    cin >> searchKey2D;

    cout << "------------------------------------------------\n";
    cout << "-------------------Output-----------------------\n";
    print2DArray(sourceArray2D, size2D);
    reversePrint2DArray(sourceArray2D, size2D);
    findMax2DArray(sourceArray2D, size2D);
    findMin2DArray(sourceArray2D, size2D);
    searchIn2DArray(sourceArray2D, size2D, searchKey2D);
    copy2DArray(sourceArray2D, destinationArray2D, size2D);

    return 0;
}