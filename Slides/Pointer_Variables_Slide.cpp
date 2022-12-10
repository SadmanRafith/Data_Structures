#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x=10;
    int *p=&x;
    int y=*p;

    cout << "Address of integer variable x:                 " << &x << "\n";
    cout << "Value stored in the memory area of x:          " << x << "\n";
    cout << "Address of integer pointer variable *p:        " << &p << "\n";
    cout << "Address stored in the area of pointer *p:      " << p << "\n";
    cout << "Address of integer variable y:                 " << &y << "\n";
    cout << "Value pointed to by the pointer *p:            " << *p << "\n";
    cout << "Value stored in the memory area of variable y: " << y << "\n";
    
    getch();
}