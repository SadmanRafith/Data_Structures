/* MD.TAHSIN HASIB

    Implement bubble Sort and also print the number of comparisons and exchanges used.

    Input: 
    [92, 82, 21, 16, 18, 95]

    Output: 
    [16,  18, 21, 82, 92, 95]
    Number of comparisons = 14
    Number of exchanges = 9
*/

#include<iostream>
using namespace std;
int main()

{
    cout << "\n";
    int size;
    
    cout << "Enter the size: ";
    cin >> size;

    int arr[size];

    cout << "Input: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout <<"\n----------- Bubble Sort ----------------";

    cout << "\nUnsorted array       : ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    
    int temp;
    int count=0;
    int comp=0;

    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){
            if(arr[j]>arr[j+1]){             
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                //exchange count
                count++;
            }
            comp++;
        }
    }

    cout << "\nSorted array         : ";

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    //cout << "\nNumber of comparisons: " << size*(size-1)/2;
    cout << "\nNumber of comparisons: " << comp;
    cout << "\nNumber of exchanges  : " << count;

    cout << "\n\n";
    return 0;
}