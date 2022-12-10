/*
    A void pointer can hold the memory address of any data
    type, however it cannot be dereferenced.

    A void pointer is a pointer that has no associated data 
    type with it. A void pointer can hold address of any type 
    and can be typecasted to any type. 

*/

#include<iostream>
#include<conio.h>
using namespace std;

void printNumber(int *numberPtr){
    cout << *numberPtr << "\n";
}

void printLetter(char *charPtr){
    cout << *charPtr << "\n";
}

//void pointer
void print(void *ptr, char type){
    switch(type){
        case 'i': cout << *((int*)ptr) << "\n";
        break;
        case 'c': cout << *((char*)ptr) << "\n";
        break;
    }
}

int main()
{
    int number=5;
    char letter='a';

//    printNumber(&number);
//    printLetter(&letter);

    print(&number, 'i');
    print(&letter, 'c');


    getch();
}