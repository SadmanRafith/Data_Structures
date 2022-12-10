// Implement Queue using Linked List


#include <iostream>
#include<stdlib.h>
using namespace std;


struct Node
{
   int data;
   struct Node *next;
};

struct Node* top = NULL;

void isEmpty()
{
   if(top==NULL)
   {
      cout << "List is empty" << "\n";
   }
   else
   {
      cout << "List is not empty" << "\n";
   }
}


void push(int val)
{
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = val;
   newnode->next = top;
   top = newnode;
   cout << "Element pushed!" << "\n";
}


void pop()
{
   if(top==NULL)
   {
      cout << "List Underflow" << "\n";
   }
   else
   {
      cout << "Element popped\n";
      cout << "The popped element is " << top->data << "\n";
      top = top->next;
   }
}



void display()
{
   struct Node* ptr;
   if(top==NULL)
   {
        cout<<"List is empty";
   }
   else
  {
      ptr = top;
      cout<<"\nList elements are: ";
      while(ptr != NULL){
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<"\n";
}



int main()
{
   cout <<"********************************************************************";
   cout << "\n";

   pop();
   isEmpty();

   push(10);
   push(12);
   push(14);
   push(16);
   push(18);

   cout << "\n";
   display();

   pop();

   cout <<"List after popping below";
   display();

   pop();

   cout <<"List after popping";
   display();

   cout << "\n";
   return 0;
}
