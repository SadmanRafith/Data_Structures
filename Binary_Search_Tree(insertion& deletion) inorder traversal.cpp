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

bool Search(Node*root, int data){
	if(root==NULL){
		cout << "Error: tree is empty" << "\n";
		return false;
	}
	else if(root->data == data){
		return true;
	}
	else if(data <= root->data){
		return Search(root->left, data);
	}
	else{
		return Search(root->right, data);
	}
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

      cout << "|----------------------------------------------------------|" << "\n";
    cout << "Enter search item: ";

	int s;
	cin >> s;
	cout << "\n";

	if(Search(root, s) == true){
		cout << "Element found!" << "\n";
	}
	else{
		cout << "Element not found" << "\n";
	}



	return 0;
}
