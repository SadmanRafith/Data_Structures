//22-46026-1 MD. TAHSIN HASIB

#include<iostream>
using namespace std;

int maxSize=5;
int Queue[5];
int front=-1;
int rear=-1;


//check isEmpty
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
        "Queue is empty!\n";
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


int main()
{
    cout << "\n";

    isFull();
    isEmpty();

    cout << "\n------------------------------\n";

    Enqueue(11);
    Enqueue(12);
    Enqueue(13);
    Enqueue(14);
    Enqueue(15);

    cout << "\n";

    isFull();
    isEmpty();

    FrontValue();

    showQueue();

    cout << "\n------------------------------\n";

    Dequeue();
    Dequeue();

    FrontValue();

    showQueue();

    isFull();
    isEmpty();
}
