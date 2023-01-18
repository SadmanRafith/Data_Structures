// create a half trianlge pattern of N levels

#include<iostream>
using namespace std;

int main()
{
    cout << "\n";
    int N;
    cout << "Enter the level: ";
    cin >> N;

    cout << "The following pattern 1: " << "\n";
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\n";

    cout << "The following pattern 2: " << "\n";
    for(int i=N; i>=1; i--){
        for(int j=i; j>0; j--){
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\n";
    return 0;
}