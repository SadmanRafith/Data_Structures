#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, i, *ptr, sum=0;

    cout << "\n";
    cout << "Enter number of elements: ";
    cin >> n;

    ptr = new int[n];

    if(ptr == NULL){
        cout << "Error! not allocated!";
        return 1;
    }

    cout << "Enter elemenets: \n";

    for(i=0; i<n; i++){
        cin >> *(ptr+i);
        sum += *(ptr+i);
    }

    cout << "Sum = " << sum;

    delete[](ptr);                              //memory deallocated

    getch();
}