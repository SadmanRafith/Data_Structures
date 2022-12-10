/*
    Initialzie an array of 8 elements and print the third
    smallest and third larger number from the array
*/


#include<iostream>
using namespace std;

int main()
{
    int size;
    int i, j;

    cout << "\n";
    cout << "Enter the size: ";
    cin >> size;

    int arr[size];

    cout << "\n";
    cout << "Elements of array: ";

    for(i=0; i<size; i++){
        cin >> arr[i];
    }

    //displaying array
    cout << "\n";
    cout << "Elements of array: ";
    for(i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    //sorting in ascending order
    int temp;

    for(i=0; i<size-1; i++){
        for(j=0; j<size-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }


    //finding the third smallest and third larger
    cout << "\n";
    cout << "Third smallest element is: " << arr[2] << "\n";
    cout << "Third larger element is: " << arr[size-2-1] << "\n";

    return 0;
}