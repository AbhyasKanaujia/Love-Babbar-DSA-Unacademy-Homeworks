# Singly Linked List

{% code title="Singly.cpp" %}
```cpp
#include <bits/stdc++.h>
using namespace std;

class SinglyLinkedList
{
protected:
  class Node
  {
  public:
    int data;
    Node *next;

    Node()
    {
      data = 0;
      next = NULL;
    }

    Node(int data)
    {
      this->data = data;
      this->next = NULL;
    }
  };

  Node *head;
  Node *tail;
  int size;

public:
  SinglyLinkedList()
  {
    head = NULL;
    tail = NULL;
    size = 0;
  }

  Node *begin()
  {
    return head;
  }

  Node *end()
  {
    return tail;
  }

  bool empty()
  {
    return head == NULL;
  }

  void clear()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      Node *next = temp->next;
      delete temp;
      temp = next;
    }
    head = NULL;
    tail = NULL;
    size = 0;
  }

  void reverse()
  {
    tail = head;
    Node *prev = NULL;
    Node *current = head;
    while (current != NULL)
    {
      Node *next = current->next;

      current->next = prev;

      prev = current;
      current = next;
    }
    head = prev;
  }

  int at(int pos)
  {
    if (pos > size || pos <= 0)
    {
      cout << "Invalid position" << endl;
      return -1;
    }

    Node *current = head;
    for (int i = 0; i < pos; i++)
      current = current->next;

    return current->data;
  }

  int front()
  {
    return head->data;
  }

  int back()
  {
    return tail->data;
  }

  void insertAtTail(int d)
  {
    Node *newNode = new Node(d);
    if (!head)
      head = tail = newNode;
    else
    {
      tail->next = newNode;
      tail = tail->next;
    }
    size++;
  }

  void insertAtHead(int d)
  {
    Node *newNode = new Node(d);
    if (!head)
      head = tail = newNode;
    else
    {
      newNode->next = head;
      head = newNode;
    }
    size++;
  }

  void insertAtPos(int d, int pos)
  {
    if (pos > size + 1)
    {
      cout << "Invalid position" << endl;
      return;
    }

    if (pos == 1)
    {
      insertAtHead(d);
      return;
    }

    if (pos == size + 1)
    {
      insertAtTail(d);
      return;
    }

    Node *newNode = new Node(d);
    int count = 1;
    Node *current = head;
    while (count < pos - 1)
    {
      current = current->next;
      count++;
    }

    newNode->next = current->next;
    current->next = newNode;
    size++;
  }

  void deleteByValue(int d)
  {
    if (head == NULL)
    {
      cout << "List empty. Nothing deleted\n";
      return;
    }

    // delete at head
    if (head->data == d)
    {
      Node *temp = head;
      head = head->next;
      delete temp;
      cout << "Deleted\n";
      size--;
      return;
    }

    Node *current = head;
    while (current && current->next->data != d)
      current = current->next;

    if (current == NULL)
    {
      cout << "Value not found. Nothing deleted\n";
      return;
    }
    else
    {
      Node *temp = current->next;
      current->next = current->next->next;
      delete temp;
      cout << "Deleted\n";
      size--;
      return;
    }
  }

  void deleteAtPos(int pos)
  {
    if (pos > size)
    {
      cout << "Invalid position" << endl;
      return;
    }

    if (head == NULL)
    {
      cout << "List empty. Nothing deleted\n";
      return;
    }

    if (pos == 1)
    {
      Node *temp = head;
      head = head->next;
      delete temp;
      cout << "Deleted\n";
      size--;
      return;
    }

    int count = 1;
    Node *current = head;
    while (count < pos - 1)
    {
      current = current->next;
      count++;
    }

    Node *temp = current->next;
    current->next = current->next->next;
    delete temp;
    cout << "Deleted\n";
    size--;
  }

  void display()
  {
    Node *ptr = head;
    cout << "head -> ";
    while (ptr)
    {
      cout << ptr->data << " -> ";
      ptr = ptr->next;
    }
    cout << "NULL" << endl;
  }
};

```
{% endcode %}

{% code title="Main.cpp" %}
```cpp
#include <bits/stdc++.h>
using namespace std;

class SinglyLinkedList {
 protected:
  class SinglyNode {
   public:
    int data;
    SinglyNode *next;

    SinglyNode() {
      data = 0;
      next = NULL;
    }

    SinglyNode(int data) {
      this->data = data;
      this->next = NULL;
    }
  };

  SinglyNode *head;
  SinglyNode *tail;
  int size;

 public:
  SinglyLinkedList() {
    head = NULL;
    tail = NULL;
    size = 0;
  }

  SinglyNode *begin() { return head; }

  SinglyNode *end() { return tail; }

  bool empty() { return head == NULL; }

  void clear() {
    SinglyNode *temp = head;
    while (temp != NULL) {
      SinglyNode *next = temp->next;
      delete temp;
      temp = next;
    }
    head = NULL;
    tail = NULL;
    size = 0;
  }

  void reverse() {
    tail = head;
    SinglyNode *prev = NULL;
    SinglyNode *current = head;
    while (current != NULL) {
      SinglyNode *next = current->next;

      current->next = prev;

      prev = current;
      current = next;
    }
    head = prev;
  }

  int at(int pos) {
    if (pos > size || pos <= 0) {
      cout << "Invalid position" << endl;
      return -1;
    }

    SinglyNode *current = head;
    for (int i = 0; i < pos; i++) current = current->next;

    return current->data;
  }

  int front() {
    if (head)
      return head->data;
    else {
      cout << "List is empty. Returning -1.";
      return -1;
    }
  }

  int back() {
    if (head)
      return tail->data;
    else {
      cout << "List is empty. Returning -1.";
      return -1;
    }
  }

  void insertAtTail(int d) {
    SinglyNode *newNode = new SinglyNode(d);
    if (!head)
      head = tail = newNode;
    else {
      tail->next = newNode;
      tail = tail->next;
    }
    size++;
  }

  void insertAtHead(int d) {
    SinglyNode *newNode = new SinglyNode(d);
    if (!head)
      head = tail = newNode;
    else {
      newNode->next = head;
      head = newNode;
    }
    size++;
  }

  void insertAtPos(int d, int pos) {
    if (pos > size + 1 || pos <= 0) {
      cout << "Invalid position" << endl;
      return;
    }
    {
      cout << "Invalid position" << endl;
      return;
    }

    if (pos == 1) {
      insertAtHead(d);
      return;
    }

    if (pos == size + 1) {
      insertAtTail(d);
      return;
    }

    SinglyNode *newNode = new SinglyNode(d);
    int count = 1;
    SinglyNode *current = head;
    while (count < pos - 1) {
      current = current->next;
      count++;
    }

    newNode->next = current->next;
    current->next = newNode;
    size++;
  }

  void deleteByValue(int d) {
    if (head == NULL) {
      cout << "List empty. Nothing deleted\n";
      return;
    }

    // delete at head
    if (head->data == d) {
      SinglyNode *temp = head;
      head = head->next;
      delete temp;
      cout << "Deleted\n";
      size--;
      return;
    }

    SinglyNode *current = head;
    while (current->next && current->next->data != d) current = current->next;

    if (current->next == NULL) {
      cout << "Value not found. Nothing deleted\n";
      return;
    } else {
      SinglyNode *temp = current->next;
      current->next = current->next->next;
      delete temp;
      cout << "Deleted\n";
      size--;
      return;
    }
  }

  void deleteAtPos(int pos) {
    if (pos > size) {
      cout << "Invalid position" << endl;
      return;
    }

    if (head == NULL) {
      cout << "List empty. Nothing deleted\n";
      return;
    }

    if (pos == 1) {
      SinglyNode *temp = head;
      head = head->next;
      delete temp;
      cout << "Deleted\n";
      size--;
      return;
    }

    int count = 1;
    SinglyNode *current = head;
    while (count < pos - 1) {
      current = current->next;
      count++;
    }

    SinglyNode *temp = current->next;
    current->next = current->next->next;
    delete temp;
    cout << "Deleted\n";
    size--;
  }

  void display() {
    SinglyNode *ptr = head;
    cout << "head -> ";
    while (ptr) {
      cout << ptr->data << " -> ";
      ptr = ptr->next;
    }
    cout << "NULL" << endl;
  }
};

```
{% endcode %}
