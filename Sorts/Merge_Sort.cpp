/*
    Merge sort is a divide-and-conquer sorting algorithm that sorts an array by repeatedly 
    dividing it in half, sorting the resulting smaller arrays, and then merging the sorted 
    smaller arrays back together. The basic idea behind the algorithm is to divide the array 
    into two equal-sized subarrays, sort each subarray, and then merge the two sorted subarrays 
    back together. The process is repeated until the entire array is sorted. Merge sort has a 
    time complexity of O(n log n) and is a stable sorting algorithm, which means that it preserves 
    the relative order of elements with equal keys.
*/


#include <iostream>
using namespace std;

// Function to merge two sorted subarrays
void merge(int arr[], int start, int mid, int end){
    int n1 = mid - start + 1;
    int n2 = end - mid;

    // Create temp arrays
    int left[n1], right[n2];

    // Copy data to temp arrays
    for(int i=0; i<n1; i++){
        left[i] = arr[start + i];
    }
    for(int j=0; j<n2; j++){
        right[j] = arr[mid + 1 + j];
    }
    
    // Merge the temp arrays back into arr[start..end]
    int i=0;
    int j=0;
    int k=start;

    while (i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k++] = left[i++];
        }
        else{
            arr[k++] = right[j++];
        }
    }

    // Copy remaining elements of left[] if any
    while (i < n1){
        arr[k++] = left[i++];
    }

    // Copy remaining elements of right[] if any
    while(j < n2){
        arr[k++] = right[j++];
    }
}

// Main merge sort function
void mergeSort(int arr[], int start, int end){
    if(start < end){
        int mid = (start + end)/2;

        // Sort first and second halves
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        // Merge the sorted halves
        merge(arr, start, mid, end);
    }
}

int main(){

    cout << "\n";
    int arr[] = {8, 4, 7, 3, 6, 2, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Unsorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    mergeSort(arr, 0, n - 1);

    // Print the sorted array
    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
    return 0;
}
