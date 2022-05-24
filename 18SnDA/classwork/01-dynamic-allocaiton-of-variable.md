# 01 Dynamic Allocaiton of variable

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()  {
    // dynamic allocaiton of variable
    int *ptr = new int;
    
    // assign value to variable
    *ptr = 5;
    
    // use variable
    cout << *ptr;
    
    // deallocate variable
    delete ptr;
    
    return 0;
}
```
