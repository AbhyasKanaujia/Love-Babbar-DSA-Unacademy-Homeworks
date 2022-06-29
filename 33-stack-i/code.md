# 👩💻 Code

```cpp
#include <bits/stdc++.h>
using namespace std;

class Stack {
 private:
  int top;
  int size;
  vector<int> data;

 public:
  Stack(int size) {
    this->size = size;
    top = -1;
    data.resize(size);
  }

  /**
   * @return int Maximum possible elements in stack
   */
  int capacity() { return size; }

  /**
   *
   * @return int number of element in the stack
   */
  int getSize() { return top + 1; }

  int getTop() {
    if (empty()) {
      cout << "Stack is empty\n";
      return -1;
    } else
      return data[top];
  }

  /**
   * @brief push an element into the stack
   *
   * @param data to push
   */
  void push(int data) {
    if (top == size - 1) {
      cout << "Stack Full!\n";
      return;
    }
    this->data[++top] = data;
  }

  /**
   * @brief Delete the topmost element if present
   *
   */
  void pop() {
    if (top == -1) {
      cout << "Stack Empty!\n";
      return;
    }
    top--;
  }

  /**
   * @brief Check if stack is empty
   *
   * @return true means is empty
   * @return false means not empty
   */
  bool empty() { return top == -1; }
};

/**
 * @brief get the middle element of a stack
 *
 * @param s stack
 * @param totalSize total size of the stack before processing
 */
void printMiddle(Stack &s, int totalSize) {
  if (totalSize / 2 + 1 == s.getSize()) {
    cout << "Middle element: " << s.getTop();
    return;
  }

  int topElement = s.getTop();
  s.pop();
  printMiddle(s, totalSize);
}

/**
 * @brief Insert an item at the bottom of the stack
 *
 * @param s
 * @param item
 */
void insertAtBottom(Stack &s, int item) {
  if (s.empty()) {
    s.push(item);
    return;
  }

  int topElement = s.getTop();
  s.pop();

  insertAtBottom(s, item);
  s.push(topElement);
}

/**
 * @brief Reverse a given stack
 *
 * @param s stack to reverse
 */
void reverse(Stack &s) {
  if (s.empty()) return;

  int topElement = s.getTop();
  s.pop();

  reverse(s);

  insertAtBottom(s, topElement);
}
```
