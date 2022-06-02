# 10 Find whether an array is a subset of another array

{% embed url="https://www.geeksforgeeks.org/find-whether-an-array-is-subset-of-another-array-set-1/" %}

### Using sorting

```cpp
string isSubset(int a1[], int a2[], int n, int m) {
    if(m > n) 
        return "No";
        
    sort(a1, a1 + n);
    sort(a2, a2 + m);
    
    int i = 0, j = 0;
    
    while(j < m) {
        if(a1[i] < a2[j]) 
            i++;
        else if(a1[i] == a2[j])
            i++, j++;
        else    
            return "No";
    } 
    
    return "Yes";
}
```

### Using set

```cpp
string isSubset(int a1[], int a2[], int n, int m) {
    set<int> s;
    
    for(int i = 0; i < n; i++)
        s.insert(a1[i]);
        
    int uniqueInFirst = s.size();
    
    for(int i = 0; i < m; i++)
        s.insert(a2[i]);
        
    return ((s.size() == uniqueInFirst) ? "Yes" : "No");   
}
```
