# 01 Union of two Sorted Arrays

{% embed url="https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1" %}
GeeksFor Geeks QUesiton
{% endembed %}

<details>

<summary>Using Set</summary>

```cpp
int doUnion(int a[], int n, int b[], int m)  {
    set<int> s(a, a + n);
    for(int i = 0; i < m; i++)
        s.insert(b[i]);
        
    return s.size();
}
```

Sorting takes $$O(n \log mn)$$

Inserting n elements in set takes

$$\log(1) + \log(2) + ... + \log(n)$$ time&#x20;

$$=\log(1\times2\times ... \times n)$$$$=\log(n!)$$

So, for inserting n and m elements it takes&#x20;

$$\log(n!\times m!)$$ time

So, Time Complexity = $$O(\log(n!\times m!))$$

Space Complexity = $$O(m + n)$$​

</details>

```cpp
```
