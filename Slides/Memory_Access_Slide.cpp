#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // 2D Array
    cout << "\n2D Array\n";
    int minu[3][5];
    int H=3;
    int W=5;
    int n, m;
    int i=0;

    for(n=0; n<H; n++){                         //rows
        for(m=0; m<W; m++){                     //columns
            minu[n][m] = i++;                   //assigning the value of i each time
            cout << minu[n][m] << " ";          //printng the array
        }
        cout << "\n";
    }


    // Memory address
    cout << "\nMemory Addresses\n";
    cout << &minu[0][0];                        //for a single one
    cout << "\n\n";

    //&minu[][] here & is used to store the memory address


    for(n=0; n<H; n++){                         //rows
        for(m=0; m<W; m++){                     //columns                  
            cout << &minu[n][m] << " ";         //printng the memory address
        }
        cout << "\n";
    }


    /*
        The name of an array always refer to the starting location of the array. 
        i.e. the first element of the array. So, mimo = &mimo[0].
    */

    cout << "\n------   minu, &minu   -------------\n";
    cout << minu << "\n";                       //this means minu[0]
    cout << &minu << "\n";                      //same

    /*
        &array[index]=start_location_array + index * size_of_data

            &mimo[ 2 ] = mimo (or &mimo[0])  +  2    * sizeof(int)
            &mimo[ 2 ] = 567 + 2 * 4 = 575
    */

    cout << "\n--------  minu[2]  -----------\n";
    cout << minu[2] << "\n";


    int arr[5] = {1,2,3,4,5};

    cout << "\n";
    cout << "\n---------  arr[index]  ----------\n";
    cout << arr[0] << "\n";                     //value of index 0
    cout << arr << "\n";                        //memory address of arr[0] (arr = arr[0])
    cout << &arr[0] << "\n";                    //memory address of [index]
    cout << &arr[2] << " = " << arr + 2 + sizeof(int) << "\n";
    
    getch();
}