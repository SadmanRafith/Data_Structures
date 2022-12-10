#include<iostream>
using namespace std;

int stack[5];
int top=0;
int Maxsize=5;

bool isEmpty(){
   if(top==0){
       cout << "Stack has no element" << "\n";
       return true;
   }
   else{
       cout << "Stack has element" << "\n";
       return false;
   }
}

bool isFull(){
    if(top==Maxsize){
        cout << "The stack is full" << "\n";
        return true;
    }
    else{
        cout << "The stack is not full" << "\n";
        return false;
    }
}

bool push(int x){
    if(top==Maxsize){
        cout << "Stack is full,Not inserted" << "\n";
        return false;
    }
    else{
        stack[top]=x;
        top++;
        cout << "Element inserted" << "\n";
    }
}

bool pop(){
    if(top==0){
        cout << "Stack is empty,not popped" << "\n";
        return false;
    }
    else{
        cout << "Element popped!" << "\n";
        cout << "The popped element is: " << stack[top-1] << "\n";
        top--;
        return true;
    }
}

void topElement(){
    if(top==0){
        cout << "Stack is empty" << "\n";
    }
    else{
        cout << "Top element is: "<< stack[top-1] << "\n";
    }
}

void show(){
    if(top==0){
        cout << "Stack has no element to show" << "\n";
    }
    else{
        cout << "Stack is: " <<endl;
        for(int i=top-1; i>-1; i--){
            cout<< stack[i] <<endl;
        }
    }
}

int main()
{
    //isFull();

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    show();
    topElement();
    isEmpty();
    isFull();

    cout << "\n------------------------\n";

    pop();
    show();
    topElement();
    isEmpty();
    isFull();
    
    return 0;
}