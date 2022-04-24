# Linear Search

[Question Link](https://practice.geeksforgeeks.org/problems/searching-a-number0324/1/)

## Solution

1. Check one by one.
2. If found then return `index`.
3. else `return -1`.

```cpp
int search(int arr[], int n, int k) {
  for(int i = 0; i < n; i++)
    if(arr[i] == k)
      return i + 1;
  return -1;
}
```
