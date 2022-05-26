# 04 Swap Alternate

```cpp
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

void swapAlternate(int arr[], int size) {
    for(int i = 0; i + 1 < size; i += 2)
        swap(arr[i], arr[i + 1]);
}

int main ()
{
  int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  int size = sizeof(arr) / sizeof(int);
  
  swapAlternate(arr, size);
  
  printArray(arr, size);
}
```

Time Complexity: O(n)

Space Complexity: O(1)

{% embed url="https://onlinegdb.com/dh3o7X-6O" %}
Run online on OnlineGDB
{% endembed %}
