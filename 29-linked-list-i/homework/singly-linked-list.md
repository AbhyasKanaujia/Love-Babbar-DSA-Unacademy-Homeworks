# Singly Linked List

```cpp
#include <bits/stdc++.h>
using namespace std;

class SinglyLinkedList
{
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

  Node *head = NULL;
  Node *tail = NULL;

  int size = 0;

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

int main()
{
  SinglyLinkedList *list = new SinglyLinkedList();
  while (true)
  {
    int d, pos;
    int choice;
    cout << "\nMenu" << endl;
    cout << "1. Display" << endl;
    cout << "2. Insert at tail" << endl;
    cout << "3. Insert at head" << endl;
    cout << "4. Insert at pos" << endl;
    cout << "5. Reverse" << endl;
    cout << "6. Delete by value" << endl;
    cout << "7. Delete at pos" << endl;
    cout << "8. Clear" << endl;
    cout << "9. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      cout << "\nList: ";
      list->display();
      break;
    case 2:
      cout << "\nEnter data: ";
      cin >> d;
      list->insertAtTail(d);
      break;
    case 3:
      cout << "\nEnter data: ";
      cin >> d;
      list->insertAtHead(d);
      break;
    case 4:
      cout << "\nEnter data: ";
      cin >> d;
      cout << "Enter position: ";
      cin >> pos;
      list->insertAtPos(d, pos);
      break;
    case 5:
      list->reverse();
      break;
    case 6:
      cout << "\nEnter data: ";
      cin >> d;
      list->deleteByValue(d);
      break;
    case 7:
      cout << "\nEnter position: ";
      cin >> pos;
      list->deleteAtPos(pos);
      break;
    case 8:
      list->clear();
      break;
    case 9:
      exit(0);
    default:
      cout << "\nInvalid choice" << endl;
    }
  }
}
```
