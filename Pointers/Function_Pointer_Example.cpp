#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

bool ascendingCompare(int a, int b){
    return a<b;
}

bool decendingCompare(int a, int b){
    return a>b;
}

void sortAscending(vector<int> &numbersVector){
    for(int startIndex=0; startIndex<numbersVector.size(); startIndex++){
        
        int bestIndex = startIndex;

        for(int currentIndex=startIndex+1; currentIndex<numbersVector.size(); currentIndex++){

            //we are doing comparison here
            if(ascendingCompare(numbersVector[currentIndex], numbersVector[bestIndex])){
                bestIndex=currentIndex;
            }
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

void sortDecending(vector<int> &numbersVector){
    for(int startIndex=0; startIndex<numbersVector.size(); startIndex++){
        
        int bestIndex = startIndex;

        for(int currentIndex=startIndex+1; currentIndex<numbersVector.size(); currentIndex++){

            //we are doing comparison here
            if(decendingCompare(numbersVector[currentIndex], numbersVector[bestIndex])){
                bestIndex=currentIndex;
            }
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

void printNumbers(vector<int> &numbersVector){
    for(int i=0; i<numbersVector.size(); i++){
        cout << numbersVector[i] << " ";
    }
}



void customSort(vector<int> &numbersVector, bool(*compareFuncPtr)(int, int)){
    for(int startIndex=0; startIndex<numbersVector.size(); startIndex++){
        
        int bestIndex = startIndex;

        for(int currentIndex=startIndex+1; currentIndex<numbersVector.size(); currentIndex++){

            //we are doing comparison here
            if(compareFuncPtr(numbersVector[currentIndex], numbersVector[bestIndex])){
                bestIndex=currentIndex;
            }
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}


int main()
{
    vector<int>myNumbers = {2,5,1,3,6,4};

    //sortAscending(myNumbers);
    //sortDecending(myNumbers);

    //bool(*funcPtr)(int, int) = ascendingCompare;      
    bool(*funcPtr)(int, int) = decendingCompare;
    customSort(myNumbers, funcPtr);                 //passing a pointer function as argument
    printNumbers(myNumbers);

    

    getch();
}