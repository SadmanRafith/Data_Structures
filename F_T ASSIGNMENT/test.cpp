#include <iostream>
#include "mySTL.h"
using namespace std;

int main()
{
    sLinkedList<int> s1;

    s1.insertAtFirst(2);
    s1.insertAtLast(3);
    s1.insertAtLast(4);
    s1.insertAtLast(5);
    s1.insertAtAnyPos(2, 1);
    s1.insertBeforeElement(4, 10);
    s1.displayList();
    s1.deleteElementByValue(10);
    s1.displayList();
    s1.deleteAtPos(3);
    s1.displayList();

    dLinkedList<int> d;

    d.insertAtFirst(2);
    d.insertAtFirst(3);
    d.insertAtFirst(4);
    d.displayList();
    d.insertAtLast(7);
    d.displayList();
    d.insertAtAnyPos(2, 6);
    d.displayList();
    d.deletePos(4);
    d.displayList();
    d.insertBeforeElement(3, 10);
    d.displayList();
    d.deleteElement(10);
    d.displayList();

    stackLinkedList<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.displayStack();
    st.pop();
    st.displayStack();

    qLinkedList<int> q1;
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.dequeue();
    q1.frontVal();
    q1.rearVal();

    BST<int> b1;

    b1.root = NULL;
    b1.root = b1.insertIntoBST(b1.root, 4);
    b1.root = b1.insertIntoBST(b1.root, 8);
    b1.root = b1.insertIntoBST(b1.root, 2);
    cout << endl
         << endl;
    cout << "The tree in Inorder is: ";
    b1.displayInorder(b1.root);

    cout << endl
         << endl;
    cout << "The tree in Preorder is: ";
    b1.displayPreorder(b1.root);

    cout << endl
         << endl;
    cout << "The tree in Postorder is: ";
    b1.displayPostorder(b1.root);
}
