# 02 Search an Element using Recursion

{% embed url="https://practice.geeksforgeeks.org/problems/searching-a-number0324/1/" %}
GeeksForGeeks: Search a number
{% endembed %}

<details>

<summary>Solution</summary>

```cpp
int search(int arr[], int n, int k, int pos = 1) {
    if(n == 0) return -1;
    
    if(arr[0] == k) return pos;
    
    return search(arr + 1, --n, k, ++pos);
}
```

</details>
