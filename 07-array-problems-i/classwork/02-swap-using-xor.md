# 02 Swap Using XOR

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 99;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    cout << "a: " << a << " b: " << b << endl;

    return 0;
}
```

Time Complexity: O(1)

Space Complexity: O(1)
