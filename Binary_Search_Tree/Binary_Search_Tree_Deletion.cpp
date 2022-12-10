/*
    For deleting a specific node from the BST we have to consider the following
    conditions:
    1. Remove the reference from it's parent so the node is detached
    2. wipe up the data from the memory

    However there are three cases,
    * Case 1: No child
    * Case 2: One child
    * Case 3: Two children
    
    -> Case 1 : (No child)
    A leaf node has no child. so in case of the no child we just need to cut the
    link of it and wipe it out from the memory.

.            A                                       A        
.         /    \            cutting G              /   \
.        B      C              --->               B     C           
.      /   \   /  \                             /  \   / 
.      D   E  F    G                           D    E F

    -> Case 2 : (One child)
    A node which has a one child need to deleted in a way so that the parent of that
    deleted node gets linked with that deleted node's one and only child. Then we can
    wipe up that deleted node from the memeory.

.                12                                              12    
.              /    \                                          /    \     
.            5       15                                      5       15
.          /  \     /   \            cutting 7             /  \     /   \   
.         3    7   13    17          --------->          3     9  13     17
.        /      \                                       /
.       1        9                                     1


    -> Case 3: (Two children)
    A node which has two child needed to be deleted in a way that we dont loose any other
    left subtree or right subtree nodes below it. While deleting a particular node we can
    either place a minimum value node from it's right subtree or maximum value from it's
    left subtree. For example below


.                    12                                                12            
.                  /    \                                            /    \    
.                5       15                                        5       17
.              /  \     /   \           cutting 15               /  \     /   \       
.            3     9  13     17         -------->              3     9  13     20   
.           /          \      \                               /          \     /
.         1            14     20                             1            14  18
.                             /                                                 
.                           18                                                
    Process:
    -> Find minimum in right subrtee
    -> Copy the value in targeted node
    -> Delete duplicate from the right subtree


    
    passing the root address along with the data
    if the tree is empty simply return the root
        (data < root->data) then it is in the left subtree
            root->left will the store the address of the deleted node in Delete(root->left, data)
        (data > root->data) then it is in the right subtree
            root->right will the store the address of the deleted node in Delete(root->right, data)

    * A minimum value of a node does not contain any left subtree.
*/




#include<iostream>
using namespace std;


struct Node{
	int data;
	Node *left;
	Node *right;
};

Node *root;


Node *GetNewNode(int data){
	Node *NewNode = new Node();
	NewNode->data = data;
	NewNode->left = NULL;
	NewNode->right = NULL;
	return NewNode;
}


// Insertion process
Node *Insert(Node *root, int data){
	if(root==NULL){
		root = GetNewNode(data);
		cout << "Succesfully Inserted!" << "\n";        
	}
	else if(data <= root->data){
		root->left = Insert(root->left, data);          
	}
	else{
		root->right = Insert(root->right, data);       
	}
	return root;
}



// Inorder traversal
void Inorder(struct Node* root) {
    if(root == NULL){
        return;
    }

    Inorder(root->left);
    cout << root->data << " -> ";
    Inorder(root->right);
}



Node *FindMin(Node *root){
	while(root->left != NULL){
        root = root->left;
    }
	return root;
}


struct Node *Delete(Node *root, int data){
	if(root == NULL){
        return root; 
    }
	else if(data < root->data){
        root->left = Delete(root->left, data);
    }
	else if(data > root->data){
        root->right = Delete(root->right, data);
    }

    // Case 1:  No child
	else{
		if(root->left == NULL && root->right == NULL){ 
			delete root;
			root = NULL;
		}
	//Case 2: One child 	
		else if(root->left == NULL){
			Node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL){
			Node *temp = root;
			root = root->left;
			delete temp;
		}
	// case 3: Two children
		else{ 
			Node *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right, temp->data);
		}
	}
	return root;
}




int main()
{
    cout << "\n";
	root = NULL;

	root = Insert(root, 5);
	root = Insert(root, 3);
	root = Insert(root, 2);
	root = Insert(root, 4);
	root = Insert(root, 7);
	root = Insert(root, 6);
	root = Insert(root, 8);
    cout << "\n";


    cout << "Tree Traversal" << "\n";
    cout << "Inorder Traversal   ---> ";
    Inorder(root);
    cout << "\n";

    Delete(root, 4);
    cout << "Inorder Traversal   ---> ";
    Inorder(root);



	return 0;
}
