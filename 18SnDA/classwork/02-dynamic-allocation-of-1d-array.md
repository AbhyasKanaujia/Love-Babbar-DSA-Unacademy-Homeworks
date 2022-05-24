# 02 Dynamic Allocation of 1D Array

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n;
    cin >> n;
    
    // dynamic allocaiton of 1D array
    int *ptr = new int[n];
    
    // assign value to array
    for(int i = 0; i < n; i++)
        cin >> ptr[i];
    
    // use array
    cout << "Values in array: ";
    for(int i = 0; i < n; i++)
        cout << ptr[i] << ' ';
    
    // deallocate array
    delete []ptr;
    
    return 0;
}
```
