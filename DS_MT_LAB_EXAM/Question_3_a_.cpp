/*
    Implement basic stack operations of 50 size array using class
    Should have the following functions,

            void isEmpty();
            void isFull();
            void Pop();
            void Push(int element);
            void Show();
*/


#include<iostream>
using namespace std;

class MyStack{

private:
    int Stack[50];
    int top;
    int Max;

public:
    MyStack(int size=50){
        Max=size;
        top=0;
    }

    void isEmpty(){
        if(top==0){
            cout << "Stack is empty" << "\n";
        }
        else{
            cout << "Stack not empty!" << "\n";
        }
    }

    void isFull(){
        if(top==Max){
            cout << "Stack is full" << "\n";
        }
        else{
            cout << "Stack is not full" << "\n";
        }
    }

    void push(int x){
        if(top==Max){
            cout << "Cannot push" << "\n";
        }
        else{
            Stack[top]=x;
            top++;
        }
    }

    void pop(){
        if(top==0){
            cout << "Stack is empty - Pop operation failed" << "\n";
        }
        else{
            cout << "Elements popped" << "\n";
            cout << "Popped element is: " << Stack[top-1] << "\n";
            top--;
        }
    }

    void topElement(){
        if(top==0){
            cout << "Stack is empty" << "\n";
        }
        else{
            cout << "Top element is: " << Stack[top-1] << "\n";
        }
    }

    void show(){
        if(top==0){
            cout << "Stack is Empty" << "\n";
        }
        else{
            cout << "--------------------------------\n";
            cout << "Stack is: "<<endl;
            for(int i=top-1; i>-1; i--){
                cout << Stack[i] << "\n";
            }
        }
    }
};

int main()
{
    cout << "\n";
    MyStack s ;              //object creation

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.topElement();
    s.show();

    cout << "\n";
    return 0;

}