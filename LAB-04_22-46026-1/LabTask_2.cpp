/* MD.TAHSIN HASIB 22-46026-1 

    Write C++ code to implement Stack using object orientation. Example - class 

    MyStack {
	    int Stack[100], Top, MaxSize; 

	    public:
	    MyStack( int Size = 100 ){MaxSize = Size; Top = 0;} 
	    bool isEmpty(); 
	    bool isFull(); 
	    bool push(int Element); 
	    bool pop(); 
	    int topElement(); 
	    void show();  
    };
*/

#include <iostream>
using namespace std;

class MyStack{

private:
    int Stack[100];
    int top;
    int Max;

public:
    MyStack(int size=100){
        Max=size;
        top=0;
    }

    bool isEmpty(){
        if(top==0){
            cout << "Stack is empty" << "\n";
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if(top==Max){
            cout << "Stack is full" << "\n";
            return true;
        }
        else{
            return false;
        }
    }

    bool push(int x){
        if(isFull()==true){
            cout << "Cannot push" << "\n";
            return false;
        }
        else{
            Stack[top]=x;
            top++;
            return true;
        }
    }

    bool pop(){
        if(isEmpty() == true){
            cout << "Stack is empty - Pop operation failed" << "\n";
            return false;
        }
        else{
            cout << "Elements popped" << "\n";
            cout << "Popped element is: " << Stack[top-1] << "\n";
            top--;
            return true;
        }
    }

    void topElement(){
        if(isEmpty()==true){
            cout << "Stack is empty" << "\n";
        }
        else{
            cout << "Top element is: " << Stack[top-1] << "\n";
        }
    }

    void show(){
        if(isEmpty()==true){
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