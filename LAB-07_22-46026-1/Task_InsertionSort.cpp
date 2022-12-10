/* MD.TAHSIN HASIB

    Implement Insertion Sort and also print the number of comparisons and exchanges used.

    Input: 
    [92, 82, 21, 16, 18, 95]

    Output: 
    [16,  18, 21, 82, 92, 95]

    92 82 21 16 18 95



    [3 1 6 5 9 2]

*/


#include<iostream>
using namespace std;
int main()

{
    cout << "\n";
    int size;

    cout << "Enter size: ";
    cin >> size;

    int arr[size];

    cout << "Input: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout <<"\n----------- Insertion Sort ----------------";

    cout << "\nUnsorted array       : ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    int pivot;
    int j;
    int count=0;
    int comp=0;

    for(int i=1; i<=size-1; i++){
        pivot = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>pivot){
            arr[j+1] = arr[j];
            j--;
            //exchange count
            count++;
            comp++;
        }
        arr[j+1] = pivot;
        comp++;
    }


    cout << "\nSorted array         : ";

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << "\nNumber of comparisons: " << comp;
    cout << "\nNumber of exchanges  : " << count;

    cout << "\n\n";
    return 0;
}