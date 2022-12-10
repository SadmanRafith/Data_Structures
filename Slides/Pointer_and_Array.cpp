#include<iostream>
#include<conio.h>
using namespace std;


int main()
{


    /*
        An array is simply a block of memory. An array can be accessed with pointers 
        as well as with [] square brackets. The name of an array variable is a pointer 
        to the first element in the array. So, any operation that can be achieved by array 
        subscripting can also be done with pointers or vice-versa.

    */



    float r[5] = {22.5,34.8,46.8,59.1,68.3};

    cout << "1st element: " << r[0] << "\n";
    cout << "1st element: " << *r << "\n";
    cout << "3rd element: " << r[2] << "\n";
    cout << "3rd element: " << *(r+2) << "\n";
    
    
    cout << "---------------------------------" << "\n";
    cout << (p+2) << "\n";               //prints the address of index 2
    cout << &p[2] << "\n";                  //same
    
    

    float *p;
    p=r;        //&r[0]

    cout << "1st element: " << p[0] << "\n";
    cout << "1st element: " << *p << "\n";
    cout << "3rd element: " << p[2] << "\n";
    cout << "3rd element: " << *(p+2) << "\n";

    for(int i=0; i<5; i++, p++){
        cout << "Element " << (i+1) << " is :" << *p << "\n";
    }


    getch();
}
