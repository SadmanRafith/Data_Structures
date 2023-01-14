/*

Insertion sort is a simple sorting algorithm that works by building up the sorted portion of the 
array one element at a time. Here's how it works in detail:

1. Start with the second element in the array.
2. Compare the second element to the one before it and swap them if necessary.
3. Continue this process with the third element, and so on, until the array is sorted.

Insertion sort has a time complexity of O(n^2), which makes it inefficient for sorting large arrays. It is also 
a stable sort, which means that the relative order of elements with equal values is preserved. However, it has 
the advantage of being easy to understand and implement, and it is efficient for small arrays and for 
partially-sorted arrays.


   //  -1   0    1   2   3   4   5
   //      12,| 54, 65, 07, 23, 09 --> i=1, key=54, j=0
   //      12,| 54, 65, 07, 23, 09 --> 1st pass done (i=1)!

   //      12, 54,| 65, 07, 23, 09 --> i=2, key=65, j=1
   //      12, 54,| 65, 07, 23, 09 --> 2nd pass done (i=2)!

   //      12, 54, 65,| 07, 23, 09 --> i=3, key=7, j=2
   //      12, 54, 65,| 65, 23, 09 --> i=3, key=7, j=1
   //      12, 54, 54,| 65, 23, 09 --> i=3, key=7, j=0
   //      12, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1
   //      07, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1--> 3rd pass done (i=3)!

   // Fast forwarding and 4th and 5th pass will give:
   
   //      07, 12, 54, 65,| 23, 09 --> i=4, key=23, j=3
   //      07, 12, 23, 54,| 65, 09 --> After the 4th pass

   //      07, 12, 23, 54, 65,| 09 --> i=5, key=09, j=4
   //      07, 09, 12, 23, 54, 65| --> After the 5th pass 


*/



#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[] = {12,54,65,7,23,9};
    int size=6;

    cout << "\n";
    cout << "Printing original array: ";

    int i;

    for(i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << "\n--------------------------------\n";
    cout << "Insertion sorting.........\n";

    int pivot;
    int j;

    for(i=1; i<=size-1; i++){
        pivot = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>pivot){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = pivot;
    }


    cout << "Printing array after insertion sort: ";

    for(i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    getch();
}
