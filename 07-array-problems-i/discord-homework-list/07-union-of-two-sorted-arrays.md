# 07 Union of two Sorted Arrays

{% embed url="https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1" %}
GeeksFor Geeks QUesiton
{% endembed %}

### Using Set

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

### Using Look Up Table

```cpp
int doUnion(int a[], int n, int b[], int m)  {
    // find the largest element from both the arrays
    int maxElement = INT_MIN;
    for(int i = 0; i < n; i++)
        maxElement = max(maxElement, a[i]);
    for(int i = 0; i < m; i++)
        maxElement = max(maxElement, b[i]);
        
    // create a lookup table as big as the largest element
    vector<bool> present(maxElement + 1, false);
    
    // result
    int count = 0;
    
    // for every element in first array
    for(int i = 0; i < n; i++)
        // if it has not been encountered yet
        if(!present[a[i]]) {
            // mark it as seen
            present[a[i]] = true;
            // count it once
            count++;
        } // any subsequent encounters will not be counted
        
    // for every element in second array
    for(int i = 0; i < m; i++)
        // if it has not been encoutered yet.
        // This includes encounters from 1st array
        if(!present[b[i]]) {
            // mark it as seen
            present[b[i]] = true;
            // count it once.
            count++;
        } // any subsequent encouters will not be counted
        
    // final result in count
    return count;
}
```

Time Complexity: $$O(m + n)$$

Space complexity: $$O(max(a, b))$$
