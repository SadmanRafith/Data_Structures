// create a full trianlge pattern of N levels

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
        for(int k=N-i; k>0; k--){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
                cout << "* ";
        }
        cout << "\n";
    }

    cout << "\n";

    cout << "The following pattern 2: " << "\n";
    for(int i=N; i>0; i--){
        for(int k=N-i; k>0; k--){
            cout << " ";
        }
        for(int j=i; j>=1; j--){
                cout << "* ";
        }
        cout << "\n";
    }


    cout << "\n";
    return 0;
}