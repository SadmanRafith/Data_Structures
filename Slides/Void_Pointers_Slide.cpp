#include<iostream>
#include<conio.h>
using namespace std;


/*
    The void type of pointer is a special type of pointer which represents the 
    absence of type. So void pointers are pointers that point to a value that 
    has no type 

    (and thus also an undetermined length and undetermined dereference 
    properties). 

    This allows void pointers to point to any data type, int, float, char, 
    double or any type of array. 

    But the data pointed by them cannot be directly dereferenced, since we have 
    no type to dereference to. 

    So need to cast the address in the void pointer to some other pointer type 
    that points to a concrete data type before dereferencing it. 

    We start with the main where two variables char a and int b is created with the 
    values 'x' and 1602 respectively. Line 52 calls the function increase
    with address of a and the size of a as parameters. sizeof(a)=sizeof(char) = 1, 
    as char type is one byte long. 

    Line 17 gives the control to the function increase and it creates two (parameter) 
    variables void *data and int psize assigned with the address value of a and sizeof(a)=1 
    of main respectively.

    Though *data contains the address of a in main, this address cannot be accessed 
    using *data with type mismatch.

    With the true value of the conditional statement psize==sizeof(char) another new pointer 
    variable char *pchar is created and is assigned the value *data (line 3-5) 
    
    As *data has no type, it must be type casted to (char*) before being assigned (line 5).
    
    With the statement ++(*pchar); pointer variable *pchar, pointing to a of main, is 
    increased by one. So, the value of a in main is changed to 'y' (the ASCII value 
    is increased by one) (line 6). 



*/



void increase(void *data, int psize){
    if(psize==sizeof(char)){
        char *pchar;
        pchar = (char*) data;
        ++(*pchar);
    }
    else if(psize==sizeof(int)){
        int *pint;
        pint = (int*) data;
        ++(*pint);
    }
}


int main()
{   
    char a='x';
    int b=1602;

    increase(&a, sizeof(a));
    increase(&b, sizeof(b));

    cout << "\n";
    cout << a << " , " << b << "\n";

    getch();
}