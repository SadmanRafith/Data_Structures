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
