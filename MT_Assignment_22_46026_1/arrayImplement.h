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


    //Functions for 1D array
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
#include<algorithm>
using namespace std;

//functions for 1D array
void print1DArray(int *array, int size){

    cout << "Printing the 1D Array          : ";
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
}

void reversePrint1DArray(int *array, int size){

    cout << "Printing the reverse 1D Array  : ";
    for(int i=size-1; i>=0; i--){
        cout << array[i] << " ";
    }
    cout << "\n";
}

void input1DArray(int *array, int size){

    cout << "Enter elements: ";
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
}

void searchIn1DArray(int *array, int size, int searchKey){
    int temp;
    int flag=0;
    for(int j=0; j<size; j++){
        if(array[j]==searchKey){
            flag=1;
            temp=j;
            break;
        }
    }
    if(flag==1){
        cout << "Element was found at index no  : " << temp;
    }
    else{
        cout << "Element was found at index no  : Not found!";
    }
    cout << "\n";
}

void findMax1DArray(int *array, int size){
    int max;
    //for maximum value
    max = array[0];
    for(int i=0; i<size; i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    cout << "Maximum Value in 1D Array is   : " << max;
    cout << "\n";
}

void findMin1DArray(int *array, int size){
    int min;
    //for minimum value
    min = array[0];
    for(int i=0; i<size; i++){
        if(array[i]<min){
            min = array[i];
        }
    }
    cout << "Minimum Value in 1D Array is   : " << min;
    cout << "\n";
}

void copy1DArray(int *sourceArray, int *destinationArray, int size){
    
    for(int i=0; i<size; i++){
        destinationArray[i]=sourceArray[i];
    }

    cout << "The source 1D Array            : ";
    for(int i=0; i<size; i++){
        cout << sourceArray[i] << " ";
    }
    cout << "\n";
    cout << "The destination 1D Array       : ";
    for(int i=0; i<size; i++){
        cout << destinationArray[i] << " ";
    }
    cout << "\n";
}


//functions for 2D array
void print2DArray(int **array, int size){

    int row=size;
    int col=size;
    cout << "Printing the 2D Array          : \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void reversePrint2DArray(int **array, int size){

    int row=size;
    int col=size;
    cout << "Printing the reverse 2D Array  : \n";
    for(int i=row-1; i>=0; i--){
        for(int j=col-1; j>=0; j--){
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void input2DArray(int **array, int size){

    int row=size;
    int col=size;
    cout << "Enter elements: \n";
    for(int i=0; i<row; i++){
        array[i] = new int[col];
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> array[i][j];
        }
    }
}

void searchIn2DArray(int **array, int size, int searchKey){
    
    int temp1, temp2;
    int flag=0;

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(array[i][j]==searchKey){
                flag=1;
                temp1=i;
                temp2=j;
                break;
            }
        }
    }
    if(flag==1){
        cout << "Element was found at index no  : Array[" << temp1 << "][" << temp2 << "]";
    }
    else{
        cout << "Element was found at index no  : Not found!";
    }
    cout << "\n";
}

void findMax2DArray(int **array, int size){

    int row=size;
    int col=size;

    int max;
    //for maximum value
    max = array[0][0];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(array[i][j]>max){
                max = array[i][j];
            }
        }
    }
    cout << "Maximum Value in 2D Array is   : " << max;
    cout << "\n";
}

void findMin2DArray(int **array, int size){

    int row=size;
    int col=size;

    int min;
    //for minimum value
    min = array[0][0];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(array[i][j]<min){
                min = array[i][j];
            }
        }
    }
    cout << "Minimum Value in 2D Array is   : " << min;
    cout << "\n";
}



void copy2DArray(int **sourceArray, int **destinationArray, int size){
    
    int row=size;
    int col=size;

    /*
        //using the C++ built in library function

        copy(sourceArray, sourceArray+size, destinationArray);
    */

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){                              //manually copying source array to destination array
            destinationArray[i][j]=sourceArray[i][j];           //works when dinamically is created
        }
    }


    cout << "The source 2D Array            :\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << sourceArray[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "The distination 2D Array       :\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << destinationArray[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}


