# 10 Two Sum

{% embed url="https://practice.geeksforgeeks.org/problems/key-pair5616/1/" %}

<details>

<summary>Question</summary>

Given an array **Arr** of **N** positive integers and another number **X**. Determine whether or not there exist two elements in **Arr** whose sum is exactly **X**.

**Example 1:**

```
Input:
N = 6, X = 16
Arr[] = {1, 4, 45, 6, 10, 8}
Output: Yes
Explanation: Arr[3] + Arr[4] = 6 + 10 = 16
```

**Example 2:**

```
Input:
N = 5, X = 10
Arr[] = {1, 2, 4, 3, 6}
Output: Yes
Explanation: Arr[2] + Arr[4] = 4 + 6 = 10
```

**Your Task:**\
You don't need to read input or print anything. Your task is to complete the function **hasArrayTwoCandidates()** which takes the array of integers **arr,** **n** and **x** as parameters and returns boolean denoting the answer.

**Expected Time Complexity:** O(N)\
**Expected Auxiliary Space:** O(N)

**Constraints:**\
1 ≤ N ≤ 105\
1 ≤ Arr\[i] ≤ 105

</details>

### Naive Approach

<details>

<summary>Logic</summary>

Simply use two loops and check for every pair

</details>

<details>

<summary>Code</summary>

```cpp
bool hasArrayTwoCandidates(int arr[], int n, int x) {
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++) 
            if(arr[i] + arr[j] == x) 
                return true;
    return false;
}
```

</details>

<details>

<summary>Complexity</summary>

Time Compleixty: $$O(n^2)$$

Space Complexity: $$O(1)$$

</details>

### Using \`map\`

<details>

<summary>Logic</summary>

1. For each element(say `a`) there must be a `b` such that `a + b = x`
2. Traverse the given array as `a`
   1. Since `a + b = x`
   2. `b = x - a`
   3. Check the map to see if `b` has already been found&#x20;
   4. If found, return `true`
      1. As we have proven that the `a` and `b` necessary to make `a + b = x` are present in the array&#x20;
   5. if not, add `a` to the map
      1. This will be used as `b` to make pair with some other `a` for next iterations.

</details>

<details>

<summary>Code</summary>

```cpp
bool hasArrayTwoCandidates(int arr[], int n, int x) {
    unordered_set<int> visited;
    
    for(int i = 0; i < n; i++) 
        if(visited.count(x - arr[i]))
            return true;
        else 
            visited.insert(arr[i]);
            
   return false;
}
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n)$$

Space Complexity: $$O(n)$$

</details>
