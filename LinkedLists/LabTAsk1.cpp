#include<iostream>
using namespace std;
class linkedList
{
    public:
    struct node
    {
        int data;
        node *next;
    };
    node *head;
    public:
    linkedList()
    {
        head = NULL;
    }
    void insert(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            node *temp1 = head;
            while(temp1->next != NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next = temp;
        }
    }
    void display()
    {
        node *temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
   
   void bubbleSort()
   {
       node *temp = head;
       node *temp1 = head;
       while(temp != NULL)
       {
           while(temp1->next != NULL)
           {
               if(temp1->data > temp1->next->data)
               {
                   int temp2 = temp1->data;
                   temp1->data = temp1->next->data;
                   temp1->next->data = temp2;
               }
               temp1 = temp1->next;
           }
           temp = temp->next;
       }
   }
};
int main()
{
    linkedList l;
    
    l.insert(3);
    l.insert(1);
    l.insert(10);
    l.insert(5);
   
    l.insert(20);
    l.display();
    cout<<endl;
    l.bubbleSort();
    l.display();

    return 0;
}