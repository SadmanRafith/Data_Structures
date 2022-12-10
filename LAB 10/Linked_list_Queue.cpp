// Implement Queue using Linked List

#include<iostream>
#include<stdlib.h>
using namespace std;


struct node
{
   int data;
   struct node *next;
};


struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;


void isEmpty()
{
    if(front==NULL && rear==NULL)
    {
        cout << "List is empty" << "\n";
    }
    else
    {
        cout << "List is not empty" << "\n";
    }
}


void Enqueue(int val)
{

   if(rear == NULL)
    {
      rear = (struct node *)malloc(sizeof(struct node));
      rear->next = NULL;
      rear->data = val;
      front = rear;
   }

   else
    {
      temp=(struct node *)malloc(sizeof(struct node));
      rear->next = temp;
      temp->data = val;
      temp->next = NULL;
      rear = temp;
   }

   cout << "Element enqueued" << "\n";
}


void Dequeue()
{
   temp = front;

   if(front == NULL)
   {
      cout << "List Underflow" << "\n";
      return;
   }

   else if(temp->next != NULL)
    {
      temp = temp->next;
      cout << "Element dequeued!" << "\n";
      cout <<"Element deleted from queue is : " << front->data << "\n";
      free(front);
      front = temp;
   }

   else
    {
      cout << "Element dequeued!" << "\n";
      cout << "Element deleted from queue is : " << front->data << "\n";
      free(front);
      front = NULL;
      rear = NULL;
   }
}


void Display()
{

   temp = front;

   if((front == NULL) && (rear == NULL))
   {
      cout << "List is empty" << "\n";
      return;
   }

   cout << "List elements are: ";
   while(temp != NULL)
   {
      cout << temp->data<<" ";
      temp = temp->next;
   }

   cout<<"\n";
}



int main(){

    cout << "|------------------------------------------------------------------------|";
    cout << "\n";
    isEmpty();
    Dequeue();

    Enqueue(15);
    Enqueue(25);
    Enqueue(35);
    Enqueue(45);
    Enqueue(55);

    cout << "\n";
    Display();

    cout << "\n";
    Dequeue();

    cout << "\n";
    Display();

    return 0;
}
