/*

Quicksort is a divide and conquer algorithm that works by partitioning an array into two smaller arrays, 
sorting the smaller arrays, and then merging them back together. Here's how it works in detail:

1. Choose a pivot element from the array. This element will be used to partition the array into two smaller arrays.
2. Divide the array into two smaller arrays, with all the elements in the left array being less than the pivot element 
    and all the elements in the right array being greater than the pivot element.
3. Recursively sort the left and right arrays.
4. Merge the left and right arrays back together, with the pivot element in the middle.

Quicksort has a time complexity of O(n log n), which makes it very efficient for sorting large arrays. It is also 
an in-place sorting algorithm, which means it does not require any additional space to sort the array.

*/


#include <iostream>
#include <algorithm>
using namespace std;

void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];

    /* partition */
    while (i <= j) {
        while (arr[i] < pivot){
            i++;
        }
        while (arr[j] > pivot){
            j--;
        }
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }

    /* recursion */
    if (left < j){
        quickSort(arr, left, j);
    }
    if (i < right){
        quickSort(arr, i, right);
    }
}

int main() {

    cout << "\n";
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "The unsorted array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
    quickSort(arr, 0, n-1);

    cout << "The sorted array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
    return 0;
}
