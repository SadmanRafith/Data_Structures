/*
    Printing the following pattern
                D
              D S L
            D S L A B
          D S L A B E X
        D S L A B E X A M
*/



#include<iostream>
using namespace std;

void process(char *array, int n, int i){
    for(i=0; i<n; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
    n=n+2;
    while(n<11){
        process(array, n, 0);
        break;
    }

    cout << "\n";
}


int main()
{
    cout << "\n";
    int n, j, i;
    char array[9] = {'D','S','L','A','B','E','X','A','M'};

    process(array, 1, 0);

    return 0;
}