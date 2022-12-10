#include<iostream>
#include<conio.h>
using namespace std;

int getNum(){
    return 5;
}

int add(int a, int b){
    return a+b;
}

int main()
{
    cout << "\n";
    //cout << getNum();
    //cout << getNum;           //memory address

    //int(*funcPtr)() = getNum;0
    //cout << funcPtr();

    int(*functAddPtr)(int, int) = add;

    cout << add(2,3) << "\n";
    cout << functAddPtr(3,4) << "\n";

    getch();
}