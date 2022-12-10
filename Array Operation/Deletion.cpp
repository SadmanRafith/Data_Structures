#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[5] = {2,4,16,32,64};
    int position;

    int i;
    
    cout << "\n";
    cout << "Original array: ";
    
    for(i=0; i<5; i++){
        cout << arr[i] << " ";
    }

    cout << "\n-----------------------------------\n";
    cout << "Deletion process.....\n";

    cout << "\nEnter the position of number: ";
    cin >> position;

    for(i=position-1; i<5; i++){
        arr[i] = arr[i+1];
    }

    cout << "\nThe Array after deleting: ";
    for(i=0; i<5-1; i++){
        cout << arr[i] << " ";
    }

    getch();
}