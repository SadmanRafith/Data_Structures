/* MD.TASHSIN HASIB 22-46026-1

    Write a C++ program of two integer arrays where size should be more 
    than five. Then make a new array with the even elements between them 
    and print the new array. 

*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout << "\n---------------------------------------";
    int arr1[10] = {4,1,8,5,2,11};
    int arr2[10] = {3,6,9,10,7,4};

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
    int count=0;

    /*                         ***Note***

        The count variable is responsible for determining the final
        size of the array that was created using the even elements of
        each array. However, without this operator we would get garbage
        value in the final array as after each iteration of the loop the
        i would become maximum. 

        Therefore after iterating arr1, we would get i=6 (i=3 appropiate as 3 even)
        and for arr2 we would get i=12 (i=3+3=6 appropiate as 3 even) and somehow it 
        would turn into garbage value after i=6.
        
        In order to avoid that count is used to determine the size of the
        final array after taking even elements from the arr1 and arr2.

    */

    for(i=0; i<6; i++){
        if(arr1[i]%2==0){
            merge_arr[i] = arr1[i];
            count++;                   
        }
    }

    k=i;

    for(i=0; i<6; i++){
        if(arr2[i]%2==0){
            merge_arr[k] = arr2[i];
            k++;
            count++;
        }
    }

    n=k;

    for(int j=0; j<n-1; j++){
        for(i=0; i<n-1; i++){
            if(merge_arr[i]>merge_arr[i+1]){
                temp = merge_arr[i];
                merge_arr[i] = merge_arr[i+1];
                merge_arr[i+1] = temp;
            }
        }
    }

    cout << "\n---------------------------------------";
    cout << "\nOutput: ";
    for(i=0; i<count; i++){
        cout << merge_arr[i] << " ";
    }

    getch();
}