#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
    int arr[] = {1,3,5,56,64,73,123,225,444};                   //must be sorted array
    int size = sizeof(arr)/sizeof(int);
    int low, mid, high;

    low=0;
    high=size-1;

    int element=64;                                             //Change the value for searching
    int flag=0;

    while(low<=high){                                           //Start searching
        mid = (low+high)/2;
        if(arr[mid]==element){
            flag=1;
            break;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid-1;
        }                                                       //Searching ends
    }

    if(flag==1){
        cout << "Element found at index no: " << mid;
    }
    else{
        cout << "Not found!";
    }
    
    
    getch();
}