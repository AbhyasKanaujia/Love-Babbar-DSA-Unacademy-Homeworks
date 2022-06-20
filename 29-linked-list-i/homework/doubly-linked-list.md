# Doubly Linked List

```cpp
#include <bits/stdc++.h>

using namespace std;

class DoublyLinkedList {
 protected:
  class DoublyNode {
   public:
    int data;
    DoublyNode *next;
    DoublyNode *prev;

    DoublyNode() {
      this->data = 0;
      this->next = NULL;
      this->prev = NULL;
    }

    DoublyNode(int data) {
      this->data = data;
      this->next = NULL;
      this->prev = NULL;
    }
  };

  DoublyNode *head;
  DoublyNode *tail;
  int size;

 public:
  DoublyLinkedList() {
    head = NULL;
    tail = NULL;
    size = 0;
  }

  DoublyNode *begin() { return head; }

  DoublyNode *end() { return tail; }

  bool empty() { return head == NULL; }

  void clear() {
    DoublyNode *temp = head;
    while (temp != NULL) {
      DoublyNode *next = temp->next;
      delete temp;
      temp = next;
    }

    head = NULL;
    tail = NULL;
    size = 0;
  }

  void reverse() {
    tail = head;
    DoublyNode *prev = NULL;
    DoublyNode *current = head;

    while (current) {
      DoublyNode *next = current->next;

      current->next = prev;
      current->prev = next;

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

    DoublyNode *current = head;
    for (int i = 0; i < pos; i++) current = current->next;

    return current->data;
  }

  int front() {
    if (head)
      return head->data;
    else {
      cout << "List is empty. Returning -1" << endl;
      return -1;
    }
  }

  int back() {
    if (head)
      return tail->data;
    else {
      cout << "List is empty. Returning -1" << endl;
      return -1;
    }
  }

  void insertAtTail(int d) {
    DoublyNode *newNode = new DoublyNode(d);
    if (head == NULL) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
    size++;
  }

  void insertAtHead(int d) {
    DoublyNode *newNode = new DoublyNode(d);
    if (head == NULL) {
      head = newNode;
      tail = newNode;
    } else {
      newNode->next = head;
      head->prev = newNode;
      head = newNode;
    }
    size++;
  }

  void insertAtPos(int pos, int d) {
    if (pos > size + 1 || pos <= 0) {
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

    DoublyNode *newNode = new DoublyNode(d);
    DoublyNode *current = head;
    int count = 1;
    while (count < pos - 1) current = current->next;

    newNode->next = current->next;
    current->next = newNode;
    newNode->prev = current;
    newNode->next->prev = newNode;
    size++;
  }

  void deleteAtHead() {
    if (empty()) {
      cout << "List is empty." << endl;
      return;
    }
    DoublyNode *temp = head;
    head = head->next;
    delete temp;
    head->prev = NULL;
    size--;
    return;
  }

  void deleteAtTail() {
    if (empty()) {
      cout << "List is empty." << endl;
      return;
    }
    DoublyNode *temp = tail;
    tail = tail->prev;
    delete temp;
    tail->next = NULL;
    size--;
    return;
  }

  void deleteByValue(int d) {
    if (head == NULL) {
      cout << "List is empty. Nothing deleted" << endl;
      return;
    }

    if (head->data == d) {
      deleteAtHead();
      return;
    }

    if (tail->data == d) {
      deleteAtTail();
      return;
    }

    // find position of d
    DoublyNode *current = head;
    while (current && current->data != d) current = current->next;

    if (current) {
      deleteNextNode(current);
      return;
    } else {
      cout << "Value not found.Nothing deleted" << endl;
      return;
    }
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

    DoublyNode *current = head;
    int count = 1;
    while (count < pos - 1) current = current->next;

    if (current->next == NULL) {
      cout << "Invalid position" << endl;
      return;
    } else {
      deleteNextNode(current);
      return;
    }

    void deleteNextNode(DoublyNode * current) {
      if (current->next == NULL) {
        cout << "Invalid Node" << endl;
        return;
      } else {
        DoublyNode *temp = current->next;
        current->next = current->next->next;
        current->next->prev = current;
        delete temp;
        size--;
      }
    }
  }
  void print() {
    DoublyNode *temp = head;
    cout << "head -> ";
    while (temp) {
      cout << temp->data << " -> ";
      temp = temp->next;
    }
    cout << " NULL " << endl;
  }
};
```
