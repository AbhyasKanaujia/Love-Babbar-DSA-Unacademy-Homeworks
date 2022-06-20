# Circular Linked List

```cpp
#include <bits/stdc++.h>
using namespace std;

class CircularLinkedList {
 protected:
  class CircularNode {
   public:
    int data;
    CircularNode *next;

    CircularNode() {
      data = 0;
      next = NULL;
    }

    CircularNode(int data) {
      this->data = data;
      this->next = NULL;
    }
  };

  CircularNode *head;
  CircularNode *tail;
  int size;

 public:
  CircularLinkedList() {
    head = NULL;
    tail = NULL;
    size = 0;
  }

  CircularNode *begin() { return head; }

  CircularNode *end() { return tail; }

  bool empty() { return head == NULL; }

  void clear() {
    CircularNode *temp = head;

    while (temp != tail) {
      CircularNode *next = temp->next;
      delete temp;
      temp = next;
    }

    if (temp != NULL) {
      delete temp;
    }

    head = NULL;
    tail = NULL;
    size = 0;
  }

  void reverse() {
    CircularNode *prev = tail;
    CircularNode *current = head;
    CircularNode *next = NULL;

    while (current != tail) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }

    current->next = prev;
    head = current;
    tail = next;
  }

  int at(int pos) {
    if (pos > size || pos <= 0) {
      cout << "Invalid position" << endl;
      return -1;
    }

    CircularNode *temp = head;
    for (int i = 0; i < pos; i++) temp = temp->next;

    return temp->data;
  }

  int front() {
    if (empty()) {
      cout << "List is empty. Returning -1" << endl;
      return -1;
    } else
      return head->data;
  }

  int back() {
    if (empty()) {
      cout << "List is empty. Returning -1" << endl;
      return -1;
    } else
      return tail->data;
  }

  void insertAtTail(int d) {
    CircularNode *newNode = new CircularNode(d);
    if (empty()) {
      head = newNode;
      tail = newNode;
      newNode->next = newNode;
    } else {
      tail->next = newNode;
      newNode->next = head;
      tail = newNode;
    }
    size++;
  }

  void insertAtHead(int d) {
    CircularNode *newNode = new CircularNode(d);
    if (empty()) {
      head = newNode;
      tail = newNode;
      newNode->next = newNode;
    } else {
      tail->next = newNode;
      newNode->next = head;
      head = newNode;
    }
    size++;
  }

  void insertAtPos(int pos, int d) {
    if (pos > size || pos <= 0) {
      cout << "Invalid position" << endl;
      return;
    }

    if (pos == 1) {
      insertAtHead(d);
      return;
    }

    if (pos == size) {
      insertAtTail(d);
      return;
    }

    CircularNode *newNode = new CircularNode(d);
    CircularNode *temp = head;
    for (int i = 0; i < pos - 1; i++) temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;
    size++;
  }

  void deleteAtHead() {
    if (empty()) {
      cout << "List is empty." << endl;
      return;
    }

    if (size == 1) {
      clear();
      return;
    }
    CircularNode *temp = head;
    head = head->next;
    delete temp;
    size--;
  }

  void deleteAtTail() {
    if (empty()) {
      cout << "List is empty." << endl;
      return;
    }

    if (size == 1) {
      clear();
      return;
    }

    CircularNode *temp = head;
    while (temp->next != tail) temp = temp->next;
    tail = temp;
    temp->next = head;
    delete tail->next;
    size--;
  }

  void deleteNextNode(CircularNode *node) {
    if (empty()) {
      cout << "List is empty." << endl;
      return;
    }

    if (node == head && node == tail) {
      clear();
      return;
    }

    if (node == NULL) {
      cout << "Invalid node." << endl;
      return;
    }

    CircularNode *temp = node->next;
    node->next = temp->next;
    delete temp;
    size--;
    return;
  }

  void deleteAtPos(int pos) {
    if (pos > size || pos <= 0) {
      cout << "Invalid position" << endl;
      return;
    }

    if (pos == 1) {
      deleteAtHead();
      return;
    }

    if (pos == size) {
      deleteAtTail();
      return;
    }

    CircularNode *temp = head;
    for (int i = 0; i < pos - 1; i++) temp = temp->next;

    deleteNextNode(temp);
  }
};
```
