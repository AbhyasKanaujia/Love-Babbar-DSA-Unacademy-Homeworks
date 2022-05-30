# 11 Triplet Sum in Array

{% embed url="https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1" %}

<details>

<summary>Question</summary>

Given an array arr of size `n` and an integer, `X`. Find if there's a triplet in the array which sums up to the given integer `X`.

\
**Example 1:**

```
Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in 
the array sums up to 13.
```

**Example 2:**

```
Input:
n = 5, X = 10
arr[] = [1 2 4 3 6]
Output:
1
Explanation:
The triplet {1, 3, 6} in 
the array sums up to 10.
```

\
**Your Task:**\
You don't need to read input or print anything. Your task is to complete the function **find3Numbers()** which takes the array arr\[], the size of the array (n) and the sum (X) as inputs and returns True if there exists a triplet in the array arr\[] which sums up to X and False otherwise.

### Complexities

Expected Time Complexity: $$O(n^2)$$\
Expected Auxiliary Space: $$O(1)$$

### **Constraints**

* $$1 ≤ n ≤ 10^3$$
* $$1 ≤ A[i] ≤ 10^5$$

</details>

### Naive Approach

<details>

<summary>Logic</summary>

1. Use three loops to find the triple
2. Do not repeat elements
   1. `jth` loop runs from `[i + 1, n)` and so on.&#x20;

</details>

<details>

<summary>Code</summary>

```cpp
bool find3Numbers(int arr[], int n, int X)
{
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            for(int k = j + 1; k < n; k++)
                if(arr[i] + arr[j] + arr[k] == X)
                    return true;
                    
    return false;
}
```

</details>

<details>

<summary>Complexity</summary>

Time Comlexity: $$O(n^3)$$

Space Complexity: $$O(1)$$

</details>

### Using \`map\`

<details>

<summary>Logic</summary>

1. This problem is a simple two-sum extension.
2. `a + b + c = x`
3. `b + c = x - a`
4. The quesion reduces to finding the two-sum from the array for `X - a`
5. The only catch is  that elements up to the index of `a` should not be used.

</details>

<details>

<summary>Code</summary>

```cpp
bool twoSum(const int arr[], const int n, const int X, int offset) {
    unordered_set<int> visited;
    for(int i = offset; i < n; i++)
        if(visited.count(X - arr[i]))
            return true;
        else 
            visited.insert(arr[i]);
            
    return false;
}

bool find3Numbers(int arr[], int n, int X) {
    for(int i = 0; i < n; i++)
        if(twoSum(arr, n, X - arr[i], i + 1))
            return true;

    return false;
}
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n^2)$$

Space Complexity: $$O(n)$$

</details>
