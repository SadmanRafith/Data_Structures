#include<iostream>
#include<conio.h>
using namespace std;

//For ascending to decending

int main()
{
    int arr[] = {11,3,6,8,15,1};
    int size = sizeof(arr)/sizeof(int);

    cout << "\n";
    cout << "Printing array before sorting...\n";
    cout << "Unsorted array: ";

    int i, j, k;

    for(i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << "\n-------------------------------------\n";
    
    int temp;

    for(i=0; i<size-1; i++){
        for(j=0; j<size-1-i; j++){
            if(arr[j]>arr[j+1]){                //asc to dec
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Printing array after sorting...\n";
    cout << "Sorted array: ";

    for(i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}


//For decending to ascending
/*
int main()
{
    int arr[] = {11,3,6,8,15,1};
    int size = sizeof(arr)/sizeof(int);

    cout << "\n";
    cout << "Printing array before sorting...\n";
    cout << "Unsorted array: ";

    int i, j, k;

    for(i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << "\n-------------------------------------\n";
    
    int temp;

    for(i=0; i<size-1; i++){
        for(j=0; j<size-1-i; j++){
            if(arr[j]<arr[j+1]){                //dec to asc
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Printing array after sorting...\n";
    cout << "Sorted array: ";

    for(i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}
*/