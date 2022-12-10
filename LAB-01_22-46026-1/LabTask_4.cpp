/* MD. TAHSIN HASIB 22-46026-1

------------------------ Lab Task - 4 ------------------------

Write a function to calculate factorial of a given integer number if that 
number is a prime number. If it is not, it will give an error.

*/


#include<iostream>
#include<conio.h>
using namespace std;

//for factorial
int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}


int main()
{

    cout << "\n-----------------------------------------\n";

    int attempt1;
    int count1=0;

    cout << "Sample Scenario 1\n";
    cout << "Input: ";
    cin >> attempt1;

    //for number 1
    for(int i=2; i<attempt1; i++){
        if(attempt1%i==0){
            count1++;
            break;
        }
    }

    if(count1==0){
        //for factorial
        int FACT;
        FACT = factorial(attempt1);

        cout << "\nOutput: " << FACT << "\n";
    }
    else{
        cout << "\nOutput: Error! Not a prime number.";
    }

    int attempt2;
    int count2=0;

    cout << "\n\nSample Scenario 2\n";
    cout << "Input: ";
    cin >> attempt2;

    //for number 2
    for(int i=2; i<attempt2; i++){
        if(attempt2%i==0){
            count2++;
            break;
        }
    }

    if(count2==0){
        //for factorial
        int FACT;
        FACT = factorial(attempt2);

        cout << "\nOutput: " << FACT << "\n";
    }
    else{
        cout << "\nOutput: Error! Not a prime number.";
    }


    getch();
}