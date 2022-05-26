# 01 Find max in array using recursion

```cpp
int max_element(int arr[], int size, int maxm = INT_MIN) {
    if(size == 0)
        return maxm;
    return max_element(arr + 1, size - 1, max(arr[0], maxm));
}
```

{% embed url="https://onlinegdb.com/TLGOJyFeY" %}
Run Online using Online GDB
{% endembed %}
