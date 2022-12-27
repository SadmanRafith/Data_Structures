#include <iostream>
using namespace std;

template <class T>
class Node
{
private:
    T data;
    Node<T> *next;
    template <class S>
    friend class sLinkedList;

public:
    Node()
    {
        this->next = NULL;
    }
};


template <class T>
class sLinkedList
{
private:
    Node<T> *head;

public:
    sLinkedList()
    {
        this->head = NULL;
    }

    Node<T> *getNewNode(int item)
    {
        Node<T> *node = new Node<T>[1];
        node->data = item;
        node->next = NULL;

        return node;
    }


    void insertAtFirst(int x)
    {
        Node<T> *NewNode = getNewNode(x);
        NewNode->next = head;
        head = NewNode;
    }


    void insertAtLast(int x)
    {
        Node<T> *NewNode = getNewNode(x);
        if (head == NULL)
        {
            head = NewNode;
            return;
        }
        Node<T> *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NewNode;
    }


    void insertAtAnyPos(int n, int x)
    {
        Node<T> *NewNode = getNewNode(x);
        if (n == 1)
        {
            NewNode->next = head;
            head = NewNode;
            return;
        }
        Node<T> *temp = head;
        for (int i = 1; i < n - 1; i++)
        {
            temp = temp->next;
        }
        NewNode->next = temp->next;
        temp->next = NewNode;
    }


    void insertBeforeElement(int key, int x)
    {
        Node<T> *temp = head;
        T n = 1;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                break;
            }
            else
            {
                temp = temp->next;
                n++;
            }
        }

        Node<T> *NewNode = getNewNode(x);
        if (n == 1)
        {
            NewNode->next = head;
            head = NewNode;
            return;
        }
        else
        {

            Node<T> *temp2 = head;
            for (int i = 1; i < n - 1; i++)
            {
                temp2 = temp2->next;
            }
            NewNode->next = temp2->next;
            temp2->next = NewNode;
        }
    }

    void deleteElementByValue(int key)
    {
        Node<T> *temp = head;
        int n = 1;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                break;
            }
            else
            {
                temp = temp->next;
                n++;
            }
        }

        if (head == NULL)
        {
            cout << "Error: Nothing to delete " << endl;
            return;
        }
        Node<T> *temp2 = head;
        if (n == 1)
        {
            head = temp2->next;
            delete temp2;
            return;
        }
        for (int i = 1; i < n - 1; i++)
        {
            temp2 = temp2->next;
        }
        Node<T> *temp3 = temp2->next;
        temp2->next = temp3->next;
        delete temp3;

        return;
    }

    void deleteAtPos(int n)
    {
        if (head == NULL)
        {
            cout << "Error: Nothing to delete " << endl;
            return;
        }
        Node<T> *temp = head;
        if (n == 1)
        {
            head = temp->next;
            delete temp;
            return;
        }
        for (int i = 1; i < n - 1; i++)
        {
            temp = temp->next;
        }
        Node<T> *temp2 = temp->next;
        temp->next = temp2->next;
        delete temp2;
        return;
    }


    void displayList()
    {
        Node<T> *temp = head;

        cout << "List is: ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


template <class U>
class dNode
{
private:
    U data;
    dNode<U> *next;
    dNode<U> *prev;
    template <class D>
    friend class dLinkedList;

public:
    dNode()
    {
        this->next = NULL;
    }
};

template <class U>
class dLinkedList
{
private:
    dNode<U> *head;

public:
    dLinkedList()
    {
        this->head = NULL;
    }

    dNode<U> *getNewNode(int item)
    {
        dNode<U> *node = new dNode<U>[1];
        node->data = item;
        node->prev = NULL;
        node->next = NULL;

        return node;
    }


    void insertAtFirst(int x)
    {
        dNode<U> *NewNode = getNewNode(x);
        if (head == NULL)
        {
            head = NewNode;
            return;
        }
        head->prev = NewNode;
        NewNode->next = head;
        head = NewNode;
    }

    void insertAtLast(int x)
    {
        dNode<U> *NewNode = getNewNode(x);
        dNode<U> *temp = head;
        if (head == NULL)
        {
            head = NewNode;
            return;
        }
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NewNode;
        NewNode->prev = temp;
    }

    void insertAtAnyPos(int n, int x)
    {
        dNode<U> *NewNode = getNewNode(x);
        NewNode->data = x;
        if (n == 1)
        {
            NewNode->next = head;
            head = NewNode;
            return;
        }
        dNode<U> *temp1 = head;
        for (int i = 1; 1 < n - 1; i++)
        {
            temp1 = temp1->next;
        }
        NewNode->prev = temp1;
        NewNode->next = temp1->next;
        temp1->next = NewNode;
    }

    void deletePos(int n)
    {
        dNode<U> *temp = head;
        if (n == 1)
        {
            head = temp->next;
            head->prev = NULL;
            delete temp;
            return;
        }
        for (int i = 1; i < n - 1; i++)
        {
            temp = temp->next;
        }
        dNode<U> *temp2;
        temp2 = temp;
        temp2 = temp2->next;
        dNode<U> *temp3;
        temp3 = temp2;
        temp2 = temp2->next;
        temp2->prev = temp;
        temp->next = temp2;
        delete temp3;
    }

    void insertBeforeElement(int key, int x)
    {
        dNode<U> *temp = head;
        int n = 1;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                break;
            }
            else
            {
                temp = temp->next;
                n++;
            }
        }

        if (n == 1)
        {
            dNode<U> *NewNode = getNewNode(x);
            if (head == NULL)
            {
                head = NewNode;
                return;
            }
            head->prev = NewNode;
            NewNode->next = head;
            head = NewNode;
        }
        else
        {
            dNode<U> *NewNode = getNewNode(x);

            dNode<U> *temp1 = head;
            for (int i = 1; i < n - 1; i++)
            {
                temp1 = temp1->next;
            }
            NewNode->prev = temp1;
            NewNode->next = temp1->next;
            temp1->next = NewNode;
        }
    }

    void deleteElement(int key)
    {
        dNode<U> *temp = head;
        int n = 1;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                break;
            }
            else
            {
                temp = temp->next;
                n++;
            }
        }

        dNode<U> *temp1 = head;
        if (n == 1)
        {
            head = temp1->next;
            head->prev = NULL;
            delete temp1;
            return;
        }
        for (int i = 1; i < n - 1; i++)
        {
            temp1 = temp1->next;
        }
        dNode<U> *temp2;
        temp2 = temp1;
        temp2 = temp2->next;
        dNode<U> *temp3;
        temp3 = temp2;
        temp2 = temp2->next;
        temp2->prev = temp1;
        temp1->next = temp2;
        delete temp3;
    }

    void displayList()
    {
        dNode<U> *temp = head;
        if (head == NULL)
        {
            cout << "Error: List is Empty " << endl;
            return;
        }

        cout << "Doubly linked List: "
             << " ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

template <class ST>
class stNode
{
private:
    ST data;
    stNode<ST> *next;
    template <class Sl>
    friend class stackLinkedList;

public:
    stNode()
    {
        this->next = NULL;
    }
};

template <class ST>
class stackLinkedList
{
private:
    stNode<ST> *top;

public:
    stackLinkedList()
    {
        this->top = NULL;
    }

    void push(int val)
    {
        stNode<ST> *newNode = new stNode<ST>[1];

        newNode->data = val;
        newNode->next = top;
        top = newNode;
        cout << "Element pushed!"
             << "\n";
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "List Underflow"
                 << "\n";
        }
        else
        {
            cout << "Element popped!\n";
            cout << "The popped element is " << top->data << "\n";
            top = top->next;
        }
    }

    void displayStack()
    {
        stNode<ST> *temp;
        if (top == NULL)
            cout << "List is empty!";
        else
        {
            temp = top;
            cout << "\nList elements are: ";
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
        cout << "\n";
    }
};

template <class Q>
class qNode
{
private:
    Q data;
    qNode<Q> *next;
    template <class Ql>
    friend class qLinkedList;

public:
    qNode()
    {
        this->next = NULL;
    }
};

template <class Q>
class qLinkedList
{
private:
    qNode<Q> *temp;
    qNode<Q> *front;
    qNode<Q> *rear;

public:
    qLinkedList()
    {
        this->front = NULL;
        this->rear = NULL;
    }

    void enqueue(int x)
    {

        if (rear == NULL)
        {
            rear = new qNode<Q>[1];
            rear->next = NULL;
            rear->data = x;
            front = rear;
        }

        else
        {
            temp = new qNode<Q>[1];
            rear->next = temp;
            temp->data = x;
            temp->next = NULL;
            rear = temp;
        }

        cout << "Element enqueued!"
             << "\n";
    }

    void dequeue()
    {
        temp = front;

        if (front == NULL)
        {
            cout << "List Underflow"
                 << "\n";
            return;
        }

        else if (temp->next != NULL)
        {
            temp = temp->next;
            cout << "Element dequeued!"
                 << "\n";
            cout << "Element deleted from queue is : " << front->data << "\n";
            delete front;
            front = temp;
        }

        else
        {
            cout << "Element dequeued!"
                 << "\n";
            cout << "Element deleted from queue is : " << front->data << "\n";
            delete front;
            front = NULL;
            rear = NULL;
        }
    }

    void frontVal()
    {
        Q fTemp = front->data;
        cout << "The front value is: " << fTemp;
    }

    void rearVal()
    {
        Q rTemp = rear->data;
        cout << "The rear value is: " << rTemp;
    }
};

template <class B>
class bNode
{
private:
    B data;
    bNode<B> *left;
    bNode<B> *right;
    template <class BS>
    friend class BST;

public:
    bNode()
    {
        this->left = NULL;
        this->right = NULL;
    }
};

template <class B>
class BST
{

public:
    bNode<B> *root;
    BST()
    {
        this->root = NULL;
    }

    bNode<B> *GetNewNode(int data)
    {
        bNode<B> *NewNode = new bNode<B>[1];
        NewNode->data = data;
        NewNode->left = NULL;
        NewNode->right = NULL;
        return NewNode;
    }

    bNode<B> *insertIntoBST(bNode<B> *root, int data)
    {
        if (root == NULL)
        {
            root = GetNewNode(data);
        }
        else if (data <= root->data)
        {
            root->left = insertIntoBST(root->left, data);
        }
        else
        {
            root->right = insertIntoBST(root->right, data);
        }
        return root;
    }

    void displayInorder(bNode<B> *root)
    {

        if (root == NULL)
        {
            return;
        }
        displayInorder(root->left);
        cout << root->data << " ";
        displayInorder(root->right);
    }

    void displayPreorder(bNode<B> *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->data << " ";
        displayPreorder(root->left);
        displayPreorder(root->right);
    }

    void displayPostorder(bNode<B> *root)
    {
        if (root == NULL)
        {
            return;
        }
        displayPostorder(root->left);
        displayPostorder(root->right);

        cout << root->data << " ";
    }
};
