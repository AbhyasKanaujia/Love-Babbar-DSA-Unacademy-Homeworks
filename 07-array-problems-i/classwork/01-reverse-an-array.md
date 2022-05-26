# 01 Reverse an Array

{% embed url="https://practice.geeksforgeeks.org/problems/reverse-an-array/0" %}
GeeksForGeeks Question
{% endembed %}

<details>

<summary>Solution</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size) {
    int p1 = 0, p2 = size - 1;
    
    while(p1 < p2) 
        swap(arr[p1++], arr[p2--]);
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        int *arr = new int[N];
        for(int i = 0; i < N; i++)
            cin >> arr[i];
            
        reverse(arr, N);
        
        for(int i = 0; i < N; i++)
            cout << arr[i] << ' ';
            
        cout << endl;
    }
    
    return 0;
}
```

Note: Change the import from `iostream` to `bits/stdc++.h`.

Time Complexity: O(n)

Space COmpleixty: O(1)

</details>

The STL Function `reverse(arr, arr + n)` can reverse the array.
