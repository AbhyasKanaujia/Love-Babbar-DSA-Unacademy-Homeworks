# Double pointers and funciton play

```cpp
#include <iostream>
using namespace std;

void modify(int **a) {
    *a = *a + 1;
}

int main()
{
    int a = 5;
    int *p = &a;
    int **q = &p;
    
    cout << "a: " << a << endl;     // 5
    cout << "&a: " << &a << endl;   // b4
    cout << "p: " << p << endl;     // b4
    cout << "*p: " << *p << endl;   // 5
    cout << "&p: " << &p << endl;   // b8
    cout << "q: " << q << endl;     // b8
    cout << "*q: " << *q << endl;   // b4
    cout << "**q: " << **q << endl; // 5
    cout << "&q: " << &q << endl;   // c0
    
    modify(q);
    
    cout << "a: " << a << endl;     // 5
    cout << "&a: " << &a << endl;   // b4
    cout << "p: " << p << endl;     // b8 moved by 4 bytes
    cout << "*p: " << *p << endl;   // garbage
    cout << "&p: " << &p << endl;   // b8
    cout << "q: " << q << endl;     // b8
    cout << "*q: " << *q << endl;   // b8 moved by 4 bytes
    cout << "**q: " << **q << endl; // garbage
    cout << "&q: " << &q << endl;   // c0
    
    
    return 0;
}

```
