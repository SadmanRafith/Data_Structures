/* MD. TAHSIN HASIB 22-46026-1

------------------------ Lab Task - 1 ------------------------

Initialize an array of n elements and print the array elements in reverse order. 
Then find the largest element, smallest element and average value of the elements.

*/


#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout << "\n-----------------------------------------\n";
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Sample Input: ";

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    //reverse array
    cout << "\n-----------------------------------------";
    cout << "\nSample Output: ";
    cout << "\nReverse order: ";

    for(int i=n-1; i>=0; i--){
        cout << arr[i] << " ";
    }

    //largest, smallest
    int max, min;
    max = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>=max){
            max = arr[i];
        }
    }
    cout << "\nLargest element: " << max;

    min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<=min){
            min = arr[i];
        }
    }
    cout << "\nSmallest element: " << min;

    float avg=0;
    int sum=0;

    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    avg = (float)sum/n;
    cout << "\nAverage value of the elements: " << avg;


    getch();
}