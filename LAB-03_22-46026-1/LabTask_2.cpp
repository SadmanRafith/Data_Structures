/* MD.TAHSIN HASIB 22-46026-1

    Write a code that will create custom ciphers (encoded words) on strings. Follow this procedure:
    
    1. Write a function named encode that takes TWO parameters, a string s and an integer j.
    2. Skip j number of characters in the string and increase the ASCII value of the next character by 3.
    3. Print the encoded string.
    4.Then write a function named decode which will decode the string from iii.

*/

#include <iostream>
#include<conio.h>
using namespace std;

void encode(string str, int j){

    int temp;

    for(int i=j; i<str.size(); i=i+j+1){
        temp = str[i];
        str[i] = (char)(temp + j);
    }
    cout << "\n--------------------------------------------------\n";
    cout << "\nEncoded String: " << str;
}

void decode(string str, int j){
    
    int temp;

    for(int i=j; i>str.size(); i=i-j-1){
        temp = str[i];
        str[i] = (char)(temp + j);
    }
    cout << "\n--------------------------------------------------\n";
    cout << "\nDecoded String: " << str;
}

int main()
{
    cout << "\n--------------------------------------------------\n";

    int j;
    string str;

    cout<< "Sample String(s): ";
    getline(cin,str);

    cout<< "Sample Integer(j): ";
    cin >> j;

    cout << "\nSample Integer: " << j;

    encode(str, j);
    decode(str, j);


    getch();
}
