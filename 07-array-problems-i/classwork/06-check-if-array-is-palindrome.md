# 06 Check if Array is Palindrome

```cpp
#include <iostream>
using namespace std;

bool check(int arr[], int size) {
    int p1 = 0, p2 = size - 1;
    while(p1 < p2) 
        if(arr[p1++] != arr[p2--])
            return false;
            
    return true;
}

int main()
{
    // create and input array of size N
    int N;
    cin >> N;
    int *arr = new int[N];
    for(int i = 0; i < N; i++)
        cin >> arr[i];
        
    cout << "The array is palindrome is " << boolalpha << check(arr, N);

    return 0;
}
```

Time Complexity: O(n)

Space Complexity: O(1)
