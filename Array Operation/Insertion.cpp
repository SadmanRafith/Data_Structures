#include<iostream>
using namespace std;





int main()
{
    int arr[50] = {1,2,3,4,5};                                          // The size should be long enough to add another element
                                                                        // Also manually intitializing size and elements of the array
    cout << "\n";
    cout << "Printing the original array: ";

    int i;

    for(i=0; i<5; i++){                                                 // Printing the original array
        cout << arr[i] << " ";
    }

    cout << "\n-----------------------------------\n";
    cout << "Insertion process.....\n";
    
    int position;                                                       // Determining on which position the user is going to insert an element
    int value;                                                          // Giving the value of that element

    cout << "\nEnter the position: ";
    cin >> position;
                                                                        // *** Index = Position - 1 ***
    cout << "\nEnter the value: ";
    cin >> value;

    for(i=5-1; i>=position-1; i--){
        arr[i+1] = arr[i];                                              // Right shifting every elements one by one until the position comes
    }

    arr[position-1] = value;                                            // Assigning the value in that particular index

    cout << "Array after inserting value: ";
    for(i=0; i<5+1; i++){                                               // Printing the array after insertion
        cout << arr[i] << " ";
    }

    return 0;
}
