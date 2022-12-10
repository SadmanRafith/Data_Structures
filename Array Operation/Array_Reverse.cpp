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
    
    return 0;
}
