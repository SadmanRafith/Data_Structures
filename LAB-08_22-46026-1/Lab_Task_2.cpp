//22-46026-1 MD. TAHSIN HASIB

#include<iostream>
using namespace std;


class MyQueue{

private:
    int Queue[5];
    int front;
    int rear;

public:
    MyQueue(){
        int front=-1;
        int rear=-1;
    }

    bool isEmpty(){
        if(front==-1){
            cout << "Queue is empty!\n";
            return true;
        }
        else{
            cout << "Queue is not empty!\n";
            return false;
        }
    }

    //check isFull
    bool isFull(){
        if(front==0 && rear==4){
            cout << "Queue is full!\n";
            return true;
        }
        else{
            cout << "Queue is not full!\n";
            return false;
        }
    }

    //Enqueue
    void Enqueue(int value){
        if(front==0 && rear==4){
            cout << "Queue is full!\n";
        }
        else{
            front=0;
            rear++;
            Queue[rear]=value;
            cout << "Queue enqueued!\n";
        }
    }

    //Dequeue
    void Dequeue(){
        if(front==-1){
            cout << "Queue is empty!\n";
        }
        else{
            if(front>=rear){
                front=-1;
                rear=-1;
            }
            else{
                front++;
            }
            cout << "Queue dequeued!\n";
        }
    }

    void FrontValue(){
        if(front==-1){
            cout << "Queue is empty!\n";
        }
        else{
            cout << "\nQueue front: " << front << "\n";
            cout << "Queue rear: " << rear << "\n";
        }
    }


    void showQueue(){
        if(front==-1){
            cout << "Queue is empty!\n";
        }
        else{
            cout << "\nQueue elements: ";
            for(int i=front; i<=rear; i++){
                cout << Queue[i] << " ";
            }
            cout << "\n";
        }
    }
};


int main()
{
    cout << "\n";
    MyQueue q ;

    q.isEmpty();
    q.isFull();


    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);

    q.showQueue();

    q.Dequeue();
    q.Dequeue();

    q.FrontValue();

    q.showQueue();

    cout << "\n";


    return 0;
}



