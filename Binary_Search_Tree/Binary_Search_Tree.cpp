/*
Binary search tree (BST) is a data structure that allows fast search, insertion, and deletion of data. It is called 
a binary search tree because each node has at most two children and the tree is ordered: for any given node, all values 
in its left subtree are less than or equal to the value at the node, and all values in its right subtree are greater 
than the value at the node.
Here's how the BST algorithm works:
1. Start at the root node.
2. If the root node is null, return null.
3. If the value you are searching for is less than the value at the root node, search the left subtree. 
   If the value is greater than the value at the root node, search the right subtree.
4. Repeat this process until you find the value you are searching for or until you reach a null node.
5. Insertion and deletion in a BST follow a similar process. To insert a value, you find the appropriate 
   place in the tree for it and add it as a new leaf node. To delete a value, you find the node with the 
   value and either delete it (if it has no children), replace it with one of its children (if it has one child), 
   or replace it with the smallest value in its right subtree (if it has two children).
BSTs are efficient because the average time complexity for search, insert, and delete operations is O(log n), where n is the 
number of nodes in the tree. This is much faster than a linear search, which has a time complexity of O(n).
*/

#include<iostream>
using namespace std;


struct BstNode
{
	int data;
	BstNode *left;
	BstNode *right;
};

BstNode *root;


BstNode *GetNewNode(int data)
{
	BstNode *NewNode = new BstNode();
	NewNode->data = data;
	NewNode->left = NULL;
	NewNode->right = NULL;
	return NewNode;
}




// insertion process
BstNode *Insert(BstNode *root, int data)
{
	if(root==NULL)
	{
		root = GetNewNode(data);
		cout << "Succesfully Inserted!" << "\n";        // all the insertion is made in root
	}
	else if(data <= root->data)
	{
		root->left = Insert(root->left, data);          // inserts in left node
	}
	else
	{
		root->right = Insert(root->right, data);        // inserts in right node
	}
	return root;
}


// Preorder traversal
void preorderTraversal(struct BstNode* root)
{
    if(root == NULL){
        return;
    }

    cout << root->data << " -> ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}


// Postorder traversal
void postorderTraversal(struct BstNode* root)
{
    if(root == NULL)
    {
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " -> ";
}


// Inorder traversal
void inorderTraversal(struct BstNode* root) 
 {
    if(root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " -> ";
    inorderTraversal(root->right);
}


bool Search(BstNode *root, int data){
	if(root==NULL)
	{
		cout << "Error: tree is empty" << "\n";
		return false;
	}
	else if(root->data == data)
	{
		return true;
	}
	else if(data <= root->data)
	{
		return Search(root->left, data);
	}
	else
	{
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
