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


// insertion process
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


// Preorder traversal
void preorderTraversal(struct Node* root){
    if(root == NULL){
        return;
    }

    cout << root->data << " -> ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}


// Postorder traversal
void postorderTraversal(struct Node* root) {
    if(root == NULL){
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " -> ";
}



//deletiop process
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

    //No child
	else{
		if(root->left == NULL && root->right == NULL){
			delete root;
			root = NULL;
		}
	//One child
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
	//Two children
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
    cout << "Question - 3 Odd PC" << "\n";
    cout << "----------------------------------" << "\n";

    root = NULL;

    root = Insert(root, 5);
    root = Insert(root, 3);
    root = Insert(root, 2);
    root = Insert(root, 4);
    root = Insert(root, 7);
    root = Insert(root, 6);
    root = Insert(root, 8);

    cout << "\n";
    cout << "Traverse" << "\n";

    cout << "Preorder Taversal ";
    preorderTraversal(root);
    cout << "\n";
    cout << "Postorder Traversal ";
    postorderTraversal(root);
    cout << "\n";


    cout << "Deletion Process" << "\n";
    Delete(root, 4);
    cout << "Preorder Taversal ";
    preorderTraversal(root);


    return 0;
}
