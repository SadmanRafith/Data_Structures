/*
    Do the following to write program for a Single Linked List:
    Create a singly linked list by inserting node one by one at the end.
    Display your list
    Insert a new item at a specific position (at the beginning and after a given node)
    Search an item into your linked list.
    Delete an item from the list (at beginning, at last and at middle)
*/


#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

Node *head;

Node *GetNewNode(int x)
{
	Node *NewNode = new Node();
	NewNode->data=x;
	NewNode->next=NULL;
	return NewNode;
}

void InsertAtHead(int x)
{
	Node *NewNode = GetNewNode(x);
	NewNode->next = head;
	head = NewNode;
}

void InsertAtTail(int x)
{
	Node *NewNode = GetNewNode(x);
	if(head==NULL)
    {
		head=NewNode;
		cout << "\nInserted successfully";
		return;
	}
	Node *temp=head;

	while(temp->next != NULL)
    {
		temp=temp->next;
	}
	temp->next = NewNode;
	cout << "\nInserted Successfully";
}


void InsertAtAnyPosition(int n, int x)
{
	Node *NewNode = GetNewNode(x);
	if(n==1)
    {
		NewNode->next = head;
		head = NewNode;
		cout << "\nElement is added in the specific position";
		return;
	}
	Node *temp = head;
	for(int i=1; i<n-1; i++)
	{
		temp = temp->next;
	}
	NewNode->next = temp->next;
	temp->next = NewNode;
	cout << "\nElement is added in the specific position";
}


void Delete(int n)
{
	if(head==NULL)
    {
		cout << "Error: Nothing to delete " << "\n";
		return;
	}
	Node *temp = head;
	if(n==1)
	{
		head = temp->next;
		delete temp;
		cout << "Item deleted!\n";
		return;
	}
	for(int i=1; i<n-1; i++)
	{
		temp = temp->next;
	}
	Node *temp2 = temp->next;
	temp->next = temp2->next;

	delete temp2;
	cout << "Item deleted!\n";
	return;
}


void DeleteTail()
{
	Node *temp=head;
	Node *temp2=temp;

	int i=0;
	while(temp->next != NULL)
    {
		if(i>0)
		{
			temp2 = temp2->next;
		}
		temp = temp->next;
		++i;
	}

	temp2->next = NULL;
	delete temp;
	cout << "Item deleted!\n";
}


void Traverse()
{
	Node *temp=head;

	cout << "Displaying the list!\n";
	cout << "List is: ";
	while(temp!=NULL)
    {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}


void Search(int x)
{
	Node *temp=head;

	while(temp!=NULL)
    {
		if(temp->data==x)
		{
			cout << "Element found!" << "\n";
			return;
		}
		temp=temp->next;
	}
	cout << "Element not found!" << "\n";
}


int main()
{
	cout << "|----------------------------------------------------------|";

	InsertAtTail(11);
	InsertAtTail(12);
	InsertAtTail(13);
	InsertAtTail(14);
	InsertAtTail(15);

	cout << "\n\n";
	Traverse();


	InsertAtAnyPosition(1, 20);
	InsertAtAnyPosition(3, 10);
	cout << "\n\nDisplaying list after adding...\n\n";
	Traverse();


    cout << "\n";
    Search(20);
    Search(50);



    cout << "\n";
    Delete(1);
    Delete(3);
    Traverse();
    DeleteTail();
    Traverse();


    cout << "\n";
	return 0;
}
