#include<iostream>
#include<conio.h>
using namespace std;


void swap(int *a, int *b){

    int t;

    t = *a;
    *a = *b;
    *b = t;
}


int main()
{
    int num1 = 5;
    int num2 = 10;

    cout << "\n";
    cout << "Before swapping: \n";
    cout << "Number 1 = " << num1 << "\n";
    cout << "Number 2 = " << num2 << "\n";

    swap(&num1, &num2);

    cout << "\n";
    cout << "After swapping: \n";
    cout << "Number 1 = " << num1 << "\n";
    cout << "Number 2 = " << num2 << "\n";

    getch();
}