/*

Heapsort is a comparison-based sorting algorithm that works by building a heap out of the elements to be sorted, 
and then repeatedly extracting the maximum element from the heap until it is empty. Here's how it works in detail:

1. Build a heap from the input data. A heap is a complete binary tree in which the value of each node is greater 
   than or equal to the values of its children. This means that the maximum element will always be at the root of the heap.
2. Repeatedly swap the maximum element (the root of the heap) with the last element in the heap, and then "heapify" the 
   heap by adjusting the positions of the remaining elements to maintain the heap property.
3. After all the elements have been removed from the heap, the resulting array will be sorted.

Heapsort has a time complexity of O(n log n), which makes it very efficient for sorting large arrays. It is also an in-place 
sorting algorithm, which means it does not require any additional space to sort the array. However, it is not stable, which 
means that the relative order of elements with equal values may be changed during the sort.
   
*/

#include <iostream>
using namespace std;


void heapify(int arr[], int n, int i){
	int largest = i;                            // Initialize largest as root
	int l=2 * i+1;                              // left = 2*i + 1
	int r=2 * i+2;                              // right = 2*i + 2

	if(l<n && arr[l] > arr[largest]){           // If left child is larger than root
        	largest = l;
   	}            
	if(r<n && arr[r] > arr[largest]){           // If right child is larger than largest so far
        	largest = r;
    	}            
	if(largest != i){                           // If largest is not root
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);               // Recursively heapify the affected sub-tree
	}
}


void heapSort(int arr[], int n){                	// main function to do heap sort
	for(int i=n/2-1; i>=0; i--){                // Build heap (rearrange array)
        	heapify(arr, n, i);
    	}               
	for(int i=n-1; i>=0; i--){                  // One by one extract an element from heap
		swap(arr[0], arr[i]);                   // Move current root to end
		heapify(arr, i, 0);                     // call max heapify on the reduced heap
	}
}


void printArray(int arr[], int n){              // A utility function to print array of size n 
	for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    	}		
	cout << "\n";
}


int main()
{
	int arr[] = {12, 11, 13, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);

	heapSort(arr, n);                           

	cout << "Sorted array is \n";
	printArray(arr, n);

    return 0;
}
