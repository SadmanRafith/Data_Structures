#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

int main()
{   
    string s;
    cout << "Enter here: ";
    getline(cin,s);

    cout << "\n\n";
    cout << "String object accessed using array and loop...\n";

    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }

    cout << "\n\n";
    cout << "Not using arrays or loops\n";

    cout << s;

    getch();
}