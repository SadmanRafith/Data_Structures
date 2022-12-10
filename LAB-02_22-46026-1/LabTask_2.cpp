/* MD.TAHSIN HASIB 22-46026-1

    Write a C++ program to create an integer array of size 7. Then take an number 
    from the user and print how many times that number occurs in that array. You 
    must take the elements of the array from the user.

*/


#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int size = 7;
    int array[size];
    
    cout << "\n---------------------------------------";
    
    //array input
    cout << "\nEnter elements: ";
    for(int i=0; i<size; i++){
        cin >> array[i];
    }

    //searching
    int num;
    int count=0;
    cout << "\n---------------------------------------";
    cout << "\nOutput: ";
    cout << "\nInput a number to search: ";
    cin >> num;

    for(int i=0; i<size; i++){
        if(array[i]==num){
            count++;
        }
    }

    //output
    cout << "\nThe number occurs " << count << " times in the array";
    getch();
}