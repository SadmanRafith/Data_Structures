/* MD.TAHSIN HASIB 22-46026-1

    Write a C++ program of two integer arrays where size should be more 
    than five. Merge them and create a new array. Then print the new array 
    in descending order. 

*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout << "\n---------------------------------------";
    int arr1[10] = {11,3,6,8,1,5};
    int arr2[10] = {12,9,4,2,10,7};
    int merge_arr[20];


    int i, k, n;
    int temp;

    cout << "\nArray_1 = ";
    for(i=0; i<6; i++){
        cout << arr1[i] << " ";
    }
    cout << "\nArray_2 = ";
    for(i=0; i<6; i++){
        cout << arr2[i] << " ";
    }

    //main code
    for(i=0; i<6; i++){
        merge_arr[i] = arr1[i];
    }

    k=i;

    for(i=0; i<6; i++){
        merge_arr[k] = arr2[i];
        k++;
    }

    n=k;

    for(int j=0; j<n-1; j++){
        for(i=0; i<n-1-j; i++){
            if(merge_arr[i]<merge_arr[i+1]){
                temp = merge_arr[i];
                merge_arr[i] = merge_arr[i+1];
                merge_arr[i+1] = temp;
            }
        }
    }

    cout << "\n---------------------------------------";
    cout << "\nOutput: ";
    for(i=0; i<k; i++){
        cout << merge_arr[i] << " ";
    }


    getch();
}