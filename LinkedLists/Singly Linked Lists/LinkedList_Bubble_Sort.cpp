#include <iostream>
#include <bits/stdc++.h>
using namespace std;



class Node{
	public:
		int data;
		Node *next;
		Node(int data)
		{
			this->data = data;
			this->next = NULL;
		}
};



int len(Node* head){
    Node* temp = head ;
    int i = 0 ;

    while(temp!=NULL){
        i++;
        temp=temp->next ;
    }
    return i ;
}



Node* swap(Node* ptr1, Node* ptr2){
    Node* tmp = ptr2->next;
    ptr2->next = ptr1;
    ptr1->next = tmp;
    return ptr2;
}

void bubbleSort(Node** head){

    int length=len(*head);
    Node** temp;
    int i, j, swapped;
    Node* p1;
    Node* p2;
  
    for (i=0; i<=length; i++){

        temp = head;
        swapped = 0;
  
        for (j=0; j<length-i-1; j++){
            p1 = *temp;
            p2 = p1->next;

            if(p1->data > p2->data){
                /* update the link after swapping */
                *temp = swap(p1, p2);
                swapped = 1;
            }
            temp = &(*temp)->next;
        }

        if(swapped == 0){
            break;
        }
    }
    return;
}


Node *takeinput(){

	int n;
    cout << "Enter size: ";
	cin >> n;
    cout << "Enter elements: ";
	Node *head = NULL, *tail = NULL;

	while(n--){
    	int data;
    	cin>>data;
		Node *newnode = new Node(data);
		if(head == NULL){
			head = newnode;
			tail = newnode;
		}
		else{
			tail->next = newnode;
			tail = newnode;
		}
	}
	return head;
}


void print(Node *head){
	Node *temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
	    temp = temp->next;
	}
	cout << endl;
}



int main()
{
	Node *head = takeinput();
    cout << "\n";
    cout << "Sorted List: ";
	bubbleSort(&head);
	print(head);
}