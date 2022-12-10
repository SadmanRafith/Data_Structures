#include<iostream>
using namespace std;

int main()
{
    //new allocates memory
    //delete deallocates memory

    int size;

    cout << "\n";
    cout << "Enter size: ";
    cin >> size;

    /*
        int myArray[size]; 

        this is an error!!!! cannot create array size
        on runtime!
    */

    /*
        After creating an dynamic array with new keyword,
        we must delete that array in order to free some space,
        avoiding unncessary space.
    */
  
    int *myArray = new int[size];           //allocating memory

    for(int i=0; i<size; i++){
        cout << "Array[" << i << "]: ";
        cin >> myArray[i];
    }

    cout << "\n";
    cout << "Array showing below: ";
    for(int i=0; i<size; i++){
        //cout << myArray[i] << " ";
        cout << *(myArray+i) << " ";        //another way for dereferencing
    }

    delete[]myArray;                        //after this the size of the array doesnt belong to us anymore
    myArray = NULL;                         //it is not pointing to anything


    cout << "\n";
    cout << "After deleting the array: ";

    for(int i=0; i<size; i++){
        //cout << myArray[i] << " ";
        cout << *(myArray+i) << " ";        //another way for dereferencing
    }

    return 0;
}
