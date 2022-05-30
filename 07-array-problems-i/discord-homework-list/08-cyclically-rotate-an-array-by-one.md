# 08 Cyclically Rotate an Array by One

{% embed url="https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1/" %}

<details>

<summary>Question</summary>

Given an array, rotate the array by one position in clock-wise direction.\
&#x20;

**Example 1:**

```
Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4
```

&#x20;

**Example 2:**

```
Input:
N = 8
A[] = {9, 8, 7, 6, 4, 2, 1, 3}
Output:
3 9 8 7 6 4 2 1
```

&#x20;

**Your Task:**  \
You don't need to read input or print anything. Your task is to complete the function **rotate()** which takes the array **A\[]** and its size **N** as inputs and modify the array.

&#x20;

**Expected Time Complexity:** O(N)\
**Expected Auxiliary Space:** O(1)

&#x20;

**Constraints:**\
1<=N<=105\
0<=a\[i]<=105

</details>

### Optimized Solution

<details>

<summary>Logic</summary>

Starting from the last element as `i` and `i` from `n - 1` to `1`

Copy left element at `i - 1` at `i`

This will overwrite last element.&#x20;

So before staring this process save the last element in a sepearte variable.

Place this saved element at index `0`

</details>

<details>

<summary>Code</summary>

```cpp
void rotate(int arr[], int n)
{
    int last = arr[n - 1];
    for(int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
        
    arr[0] = last;
}
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n)$$

Space Complexity: $$O(1)$$

</details>
