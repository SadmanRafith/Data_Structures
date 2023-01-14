/*

Bubble sort is a simple sorting algorithm that works by repeatedly iterating through the elements of an array and 
swapping adjacent elements that are out of order. Here's how it works in detail:

1. Start at the beginning of the array and compare the first two elements. If the first element is greater than 
   the second, swap them.
2. Move to the next pair of elements and repeat the comparison. If the second element is greater than the third, 
   swap them.
3. Continue this process until the end of the array is reached.
4. Repeat the process until no more swaps are needed.

Bubble sort has a time complexity of O(n^2), which makes it inefficient for sorting large arrays. It is also a stable 
sort, which means that the relative order of elements with equal values is preserved. However, it has the advantage of 
being easy to understand and implement.

*/

#include<iostream>
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
    
    return 0;
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
    
    return 0;
}
*/
