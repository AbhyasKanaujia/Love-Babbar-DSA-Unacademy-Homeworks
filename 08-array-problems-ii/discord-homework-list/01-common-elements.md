# 01 Common elements

### Using map

<details>

<summary>Logic</summary>

1. For each element `x` in `arr1`
   1. Store `x` in map and mark it as 1
2. For each element `y` in `arr2` and `y` marked as 1 in map
   1. mark `y` as 2 in map&#x20;
3. For each element `z` in `arr3` and `z` marked as 2 in map
   1. Store `z` in `result`
4. return `result`

</details>

<details>

<summary>Code</summary>

```cpp
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    map<int, int> visited;
    
    // mark present in arr1 as 1
    for(int i = 0; i < n1; i++)
        visited[A[i]] = 1;
        
        
    // mark present in arr2 and marked 1 as 2
    for(int j = 0; j < n2; j++)
        if(visited[B[j]] == 1)
            visited[B[j]] = 2;
            
    
    // mark present in arr2 and marked 2 as 3
    for(int z = 0; z < n3; z++)
        if(visited[C[z]] == 2)
            visited[C[z]] = 3;
            
    // all those marked as 3 are present in all the three arrays
    vector<int> intersection;
    for(auto p: visited)
        if(p.second == 3)
            intersection.push_back(p.first);
            
    return intersection;
}
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n1 + n2 + n3)$$​

Space Complexity: $$O(n1 + n2 + n3)$$

</details>

### Using 3 pointers

<details>

<summary>Logic</summary>

1. Take the pointer `p1`, `p2`, `p3` for each array
2. &#x20;If `p1` is the smallest element, then increment it (same for `p2` and `p3`)
3. At some point, all `p1`, `p2`, `p3` are the same.&#x20;
4. Check if the currently pointed item is not already in the result vector
   1. If so, insert it into the result vector and increment the three pointers.&#x20;
5. As soon as one of the pointers exhausts its corresponding array, stop.

</details>

<details>

<summary>Code</summary>

```cpp
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    int p1 = 0, p2 = 0, p3 = 0;
    
    vector<int> res;
    
    while(p1 < n1 && p2 < n2 && p3 < n3) {
        
        if(A[p1] == B[p2] && B[p2] == C[p3]) {
            
            if(res.empty() || res.back() != A[p1]) 
                res.push_back(A[p1]);
            p1++, p2++, p3++;
        } 
        else if(A[p1] <= B[p2] && A[p1] <= C[p3])
            p1++;
            
        else if(B[p2] <= C[p3])
            p2++;
            
        else
            p3++;
    }
    
    return res;
}
```

</details>
