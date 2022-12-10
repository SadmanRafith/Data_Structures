#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    
    //  00  01  02  03  04          - index
    // |03, 05, 02, 13, 12
    //   ^       ^

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12
    //       ^   ^

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12
    //          same

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12
    //              ^   ^

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13
    //     final


    int arr[] = {3,5,2,13,2};
    int n=5;
    int i, j;
    int temp;

    cout << "\n";
    cout << "Printing original array: ";
    for(i=0; i<5; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
    cout << "Running selection sort...";

    int indexmin;

    for(i=0; i<n-1; i++){
        indexmin=i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[indexmin]){
                indexmin=j;
            }
        }

        //swapping arr[i] with arr[indexmin]
        temp = arr[i];
        arr[i] = arr[indexmin];
        arr[indexmin] = temp;
    }

    cout << "\n";
    cout << "Array after sorting: ";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }


    getch();
}

