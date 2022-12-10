#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n=5;
    //cout << n << "\n";
    cout << &n << "\n";

    int *ptr = &n;
    cout << ptr << "\n";
    cout << *ptr << "\n";
    cout << "\n--------  ptr  ---------\n";
    *ptr = 10;                          //dereferencing pointer
    cout << *ptr << "\n";
    cout << n << "\n";


    
    /*
        This will give an error, we must create a variable first

        int *ptr2;
        *ptr2 = 7;                          //without any memory address pointers cant be initialize
    */

    getch();
}
