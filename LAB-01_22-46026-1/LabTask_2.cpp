/* MD. TAHSIN HASIB 22-46026-1

------------------------ Lab Task - 2 ------------------------

Initialize an integer array of n elements from the user and print how many 
numbers are odd, how many numbers are even, sum the odd numbers, sum the even numbers.


*/


#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout << "\n-----------------------------------------\n";
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Sample Input: ";

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "\n-----------------------------------------";
    cout << "\nSample Output: ";

    //finding the number of even and odd numbers & summation of odd and even numbers
    int count_odd=0;
    int sum_odd=0;

    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            count_odd++;
            sum_odd += arr[i];
        }
    }
    cout << "\nTotal odd numbers: " << count_odd;

    int count_even=0;
    int sum_even=0;

    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            count_even++;
            sum_even += arr[i];
        }
    }
    cout << "\nTotal even numbers: " << count_even;

    cout << "\nSum of odd numbers: " << sum_odd;
    cout << "\nSum of even numbers: " << sum_even;

    getch();
}