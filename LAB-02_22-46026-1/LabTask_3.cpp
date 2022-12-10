/* MD.TAHSIN HASIB 22-46026-1

    Write a C++ program to create an integer array of size 12. Print the
    number of time each element occurs in that array. You must take the
    elements of the array from the user.

*/

#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
    cout << "\n-----------------------------------------";

    int size, count;
    
    cout << "\nEnter size: ";
    cin >> size;

    int arr[size];

    cout << "\nArray_1 = ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout << "\n-----------------------------------------";
    cout << "\nOutput: \n";

    int flag[size]={0};

    for(int i=0; i<size; i++){

        count=0;

        if(flag[i]!=1){
            for(int j=0; j<size; j++){
                if(arr[i]==arr[j]){
                    count++;
                    flag[j]=1;
                }
            }

            if(count>1 || count==1){
                cout << arr[i] << " occurs " << count << " times \n";
            }

        }
    }
    getch();
}
