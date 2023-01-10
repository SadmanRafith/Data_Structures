/*
A queue is a linear data structure in which elements are added at one end and removed from the other end. 
This is known as a First-In-First-Out (FIFO) data structure because the first element added to the queue is the first one to be removed.
Here's how the queue algorithm works:
1. Initialize an empty queue.
2. To add an element to the queue, also known as enqueuing, add the element to the end of the queue.
3. To remove an element from the queue, also known as dequeuing, remove the element from the front of the queue.
4. Repeat this process until all desired elements have been added to and removed from the queue.
Here's an example of how a queue might be used:
Imagine you are in a line at a ticket counter. The person at the front of the line is the first one to be served, 
and the person at the back of the line is the last one to be served. The queue algorithm is used to ensure that 
the people are served in the order they arrived at the counter.
*/

#include<iostream>
using namespace std;

int Queue[5];                                           //we assume the maximum size will be 5
int front=-1;                                           //when there is no element the default value of front is -1
int rear=-1;                                            //when there is no element the default value of rear -1

bool isFull(){
    if(front==0 && rear==4){                            //for the size 5, index 4 is max
        cout << "Queue is full!\n";
        return true;
    }
    else{
        cout << "Queue is not full!\n";
        return false;
    }
}

bool isEmpty(){
    if(front==-1){                                      //when front is -1 there is no element, hence empty
        cout << "Queue is empty!\n";
        return true;
    }
    else{
        cout << "Queue is not empty!\n";
        return false;
    }
}

void Enqueue(int value){
    if(front==0 && rear==4){
        cout << "Queue is full!\n";
    }
    else{
        front=0;                                        //since we inserted one element first the value of front will be 0 from -1 which indicates that there's one element present.
        rear++;                                         //we cannot just leave the total size unchanged after inserting value. therefore we increased rear by 1 each time we insert one element.
        Queue[rear]=value;                              //front will be 0 until we perform dequeue
        cout << "Queue enqueued!\n";
    }
}

void Dequeue(){
    if(front==-1){
        "Queue is empty!\n";
    }
    else{
        if(front>=rear){                                //checks the condition, if satisfies then resets front and rear (Ex. front 0 rear 0) ultimately results in zero elements in queue.
            front=-1;                                   
            rear=-1;
        }
        else{
            front++;                                    //(Ex. front 0 rear 1) else block executes increasing front by one
        }
        cout << "Queue dequeued!\n";
    }
}

void FrontValue(){
    if(front==-1){
        cout << "Queue is empty!\n";
    }
    else{
        cout << "\nQueue front: " << front << "\n";     //very simple function for displaying front and rear.
        cout << "Queue rear: " << rear << "\n";
    }
}

void showQueue(){
    if(front==-1){
        cout << "Queue is empty!\n";
    }
    else{
        cout << "\nQueue elements: ";
        for(int i=front; i<=rear; i++){                 //front from the previous block will be needed for displaying the remaining queue!!!
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

    Enqueue(5);
    Enqueue(6);
    Enqueue(7);
    Enqueue(8);
    Enqueue(9);

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
    


    return 0;
}
