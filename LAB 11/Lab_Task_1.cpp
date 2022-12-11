#include<iostream>
using namespace std;


struct BstNode{
	int data;
	BstNode *left;
	BstNode *right;
};

BstNode *root;


BstNode *GetNewNode(int data){
	BstNode *NewNode = new BstNode();
	NewNode->data = data;
	NewNode->left = NULL;
	NewNode->right = NULL;
	return NewNode;
}




// insertion process
BstNode *Insert(BstNode *root, int data){
	if(root==NULL){
		root = GetNewNode(data);
		cout << "Succesfully Inserted!" << "\n";        // all the insertion is made in root
	}
	else if(data <= root->data){
		root->left = Insert(root->left, data);          // inserts in left node
	}
	else{
		root->right = Insert(root->right, data);        // inserts in right node
	}
	return root;
}



// traversal process
// Preorder traversal
void preorderTraversal(struct BstNode* root){
    if(root == NULL){
        return;
    }

    cout << root->data << " -> ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}


// Postorder traversal
void postorderTraversal(struct BstNode* root) {
    if(root == NULL){
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " -> ";
}


// Inorder traversal
//We know, inorder traversal of a binary search tree always yields all the nodes in increasing order.
void inorderTraversal(struct BstNode* root) {
    if(root == NULL){
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " -> ";
    inorderTraversal(root->right);
}


bool Search(BstNode *root, int data){
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
    cout << "|----------------------------------------------------------|" << "\n";
	root = NULL;

	root = Insert(root, 5);
	root = Insert(root, 3);
	root = Insert(root, 2);
	root = Insert(root, 4);
	root = Insert(root, 7);
	root = Insert(root, 6);
	root = Insert(root, 8);


	/*  The following tree
                 5
               /   \
              3     7
            /  \   / \
           2    4 6   8
	*/


    cout << "|----------------------------------------------------------|" << "\n";
    cout << "Tree Traversal" << "\n";
    cout << "Preorder Traversal  ---> ";
    preorderTraversal(root);
    cout << "\n";
    cout << "Postorder Traversal ---> ";
    postorderTraversal(root);
    cout << "\n";
    cout << "Inorder Traversal   ---> ";
    inorderTraversal(root);
    cout << "\n";


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
