/* MD.TAHSIN HASIB 22-46026-1

    Write a C++ program to create an integer array where size should be
    more than five. Then make a new array from it without the prime elements
    and print the new array. You must take the elements of the array from the user.

*/


#include<iostream>
#include<conio.h>
using namespace std;

int checkPrime(int num){

    if(num<=1){
        return 0;
    }

   for(int j=2; j<=num/2; j++){
      if(num%j==0){
        return 0;
      }
      else{
        return 1;
      }
   }
}

int main()
{
    int size;
    int arr[10];
    int new_arr[100];

    cout << "\n-----------------------------------------";
    cout<< "\nEnter the size: ";
    cin >> size;

    cout << "\nEnter elements: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int flag;
    int count=0;
    int k = 0;

    for(int i=0; i<size; i++){

        flag=checkPrime(arr[i]);

        if(flag==0){
            new_arr[k] = arr[i];
            count++;
            k++;
        }
    }

    cout << "\n-----------------------------------------";
    cout << "\nOutput: ";
    for(int i=0; i<count; i++){
        cout<< new_arr[i]<< " ";
    }

    getch();
}
