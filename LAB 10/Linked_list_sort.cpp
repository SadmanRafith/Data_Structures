// Implement a  program to sort the elements in a Linked List


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
		cout << "\nSuccessfully Inserted";
		return;
	}
	Node *temp=head;

	while(temp->next != NULL)
    {
		temp=temp->next;
	}
	temp->next = NewNode;
	cout << "\nSuccessfully Inserted";
}


void InsertAtAnyPosition(int n, int x)
{

	Node *NewNode = GetNewNode(x);

	if(n==1)
    {
		NewNode->next = head;
		head = NewNode;
		cout << "\nElement added in the specific position";
		return;
	}

	Node *temp = head;

	for(int i=1; i<n-1; i++)
    {
		temp = temp->next;
	}

	NewNode->next = temp->next;
	temp->next = NewNode;
	cout << "\nElement added in the specific position";
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

	cout << "Displaying the list\n";
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
			cout << "Element found" << "\n";
			return;
		}
		temp=temp->next;
	}
	cout << "Element not found" << "\n";
}



void sortList()
{

    struct Node *current = head;
	struct Node *index = NULL;

    int temp;

    if(head==NULL)
    {
        return;
    }

    else{
        while(current != NULL)
        {
            index = current->next;
            while(index != NULL)
            {
                if(current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                    index = index->next;
            }
                current = current->next;
            }
        }
}

int main()
{
	cout << "|----------------------------------------------------------|";


	InsertAtTail(1);
	InsertAtTail(2);
	InsertAtTail(3);
	InsertAtTail(4);
	InsertAtTail(5);

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
    Traverse();
    Delete(3);
    Traverse();
    DeleteTail();
    Traverse();


    cout << "\n";
    sortList();
    cout << "List after sorting below\n";
    Traverse();

    cout << "\n";
	return 0;
}
