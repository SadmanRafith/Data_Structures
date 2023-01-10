/*
A stack algorithm works by using the Last In, First Out (LIFO) principle. This means that the last element 
added to the stack will be the first one to be removed.
The basic operations that can be performed on a stack include:
1. push(item): which adds an element to the top of the stack
2. pop(): which removes the top element from the stack
3. top(): which returns the top element from the stack without removing it
4. is_empty(): which returns a Boolean value indicating whether the stack is empty or not
When an element is pushed onto the stack, it is placed at the top of the stack. When an element is popped off the stack, 
the element at the top of the stack is removed. When the peek() operation is performed, the element at the top of the 
stack is returned without being removed.
*/

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
