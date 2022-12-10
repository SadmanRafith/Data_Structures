/* MD. TAHSIN HASIB 22-46026-1

------------------------ Lab Task - 3 ------------------------

Write a function that takes TWO parameters to print all the odd and even 
numbers between a given range. Input the starting value of the range and ending 
value of the range. Then, send them as the parameters to your function.

*/


#include<iostream>
#include<conio.h>
using namespace std;


void process(int start_range, int end_range){

    cout << "\nOdd numbers in that range: ";
    for(int i=start_range; i<=end_range; i++){
        if(i%2!=0){
            cout << i << " ";
        }
    }

    cout << "\nEven numbers in that range: ";
    for(int i=start_range; i<=end_range; i++){
        if(i%2==0){
            cout << i << " ";
        }
    }

}


int main()
{
    cout << "\n-----------------------------------------\n";

    int start_range, end_range;

    cout << "\nSample Input: ";
    cout << "\nStarting range: ";
    cin >> start_range;
    cout << "Ending range: ";
    cin >> end_range;

    cout << "\n-----------------------------------------\n";
    cout << "\nSample Output: ";

    process(start_range, end_range);




    getch();
}