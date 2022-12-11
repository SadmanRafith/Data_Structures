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

BstNode *Insert(BstNode *root, int data)
{
	if(root==NULL)
    {
		root = GetNewNode(data);
		cout << "Succesfully Inserted!" << "\n";
	}
	else if(data <= root->data)
	{
		root->left = Insert(root->left, data);
	}
	else
	{
		root->right = Insert(root->right, data);
	}
	return root;
}



void preorderTraversal(struct BstNode* root)
{
    if(root == NULL)
    {
        return;
    }

    cout << root->data << " -> ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

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


bool Search(BstNode *root, int data)
{
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

	root = Insert(root, 10);
	root = Insert(root, 4);
	root = Insert(root, 1);
	root = Insert(root, 2);
	root = Insert(root, 12);
	root = Insert(root, 7);
	root = Insert(root, 5);



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
