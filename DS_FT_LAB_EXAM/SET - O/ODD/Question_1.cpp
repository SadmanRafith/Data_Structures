#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

Node *head;

Node *GetNewNode(int x){
	Node *NewNode = new Node();
	NewNode->data=x;
	NewNode->next=NULL;
	return NewNode;
}


void InsertAtHead(int x){
	Node *NewNode = GetNewNode(x);
	NewNode->next = head;
	head = NewNode;
}


void InsertAtTail(int x){
	Node *NewNode = GetNewNode(x);
	if(head==NULL){
		head=NewNode;
		cout << "\nSuccessfully Inserted!";
		return;
	}
	Node *temp=head;

	while(temp->next != NULL){
		temp=temp->next;
	}
	temp->next = NewNode;
	cout << "\nSuccessfully Inserted!";
}


void InsertAtAnyPosition(int n, int x){

	Node *NewNode = GetNewNode(x);

	if(n==1){
		NewNode->next = head;
		head = NewNode;
		cout << "\nElement added in the specific position!";
		return;
	}

	Node *temp = head;

	for(int i=1; i<n-1; i++){
		temp = temp->next;
	}

	NewNode->next = temp->next;
	temp->next = NewNode;
	cout << "\nElement added in the specific position!";
}




void Traverse(){
	Node *temp=head;

	cout << "Displaying the list!\n";
	cout << "List is: ";
	while(temp!=NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}




void BubblesortList(){

    struct Node *current = head;
	struct Node *index = NULL;

    int temp;

    if(head==NULL){
        return;
    }

    else{
        while(current != NULL){
            index = current->next;
            while(index != NULL){
                if(current->data > index->data){
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
	cout << "Question - 1 Odd PC" << "\n";
    cout << "----------------------------------" << "\n";


    //inserting elements at the end
	InsertAtTail(5);
	InsertAtTail(9);
	InsertAtTail(12);
	InsertAtTail(75);
	InsertAtTail(48);


	//displaying list
	cout << "\n\n";
	Traverse();

	//inserting item at specefic position
	InsertAtAnyPosition(1, 20);             //item in the beginning
	InsertAtAnyPosition(3, 10);             //after a specific node
	cout << "\n\nDisplaying list after adding...\n\n";
	Traverse();


    cout << "\n";
    BubblesortList();
    cout << "List after bubble sorting below\n";
    Traverse();

    cout << "\n";
	return 0;
}
