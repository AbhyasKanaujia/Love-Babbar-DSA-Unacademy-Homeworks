# 👩💻 Code

```cpp
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    
    Node (int d) {
        this->data = d;
        this->next = NULL;
    }
};

void traverse(Node *&head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << ' ';
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, int d) {
    // step 1: Create new node
    Node *newNode = new Node(d);
    // step 2: set next of new node to head
    newNode -> next = head;
    // step 3: update head
    head = newNode;
}

void insertAtTail(Node* &tail, int d) {
    // step 1: Create new node
    Node *newNode = new Node(d);
    // step 2: set next of tail to new Node
    tail -> next = newNode;
    // step 3: update tail
    tail = newNode;
}

void insertAtPos(Node* &head, int pos, int d) {
    // boundary checking
    // udpate tail
    if(pos == 1) 
        insertAtHead(head, d);
    else {
        // ste 1: create new Node
        Node *newNode = new Node(d);
        // step 2: traverse
        Node * prev = head;
        int t = pos - 2;
        while(t--) 
            prev = prev -> next;
            
        // step 3: udpate connections
        newNode -> next = prev -> next;
        prev -> next = newNode;
    }
}

void deleteNode(Node* &head, int target, int pos) {
    // handle not found
    // handle tail update
    if(head == NULL)
        return;
    Node *temp = head;
    Node *prev = NULL;
    if(target == temp -> data && pos == 1) {
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    } else {
        while(temp && temp -> data != target) {
            prev = temp;
            temp = temp -> next;
        }
        
        if(temp ==  NULL) {
            cout << "Not Found";
            return;
        }
        prev -> next = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
}

int main ()
{
    // dynamic allocation
    Node *first = new Node (3);
    // cout << first->data << endl; // 3
    // cout << first->next << endl; // 0

    // static allocation
    Node second (5);
    // cout << second.data << endl; // 5
    // cout << second.next << endl; // 0
    
    // INSERTION
    
    Node *b = new Node(3);
    Node *head = b;
    Node *tail = b;
    
    // insertAtHead(head, 5);
    // insertAtHead(head, 7);
    // insertAtHead(head, 9);
    // insertAtHead(head, 11);
    
    // traverse(head); // 11 9 7 5 3
    
    insertAtTail(tail, 5);
    insertAtTail(tail, 7);
    insertAtTail(tail, 9);
    insertAtTail(tail, 11);
    
    traverse(head);

    return 0;
}

```
