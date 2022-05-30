# 13 Minimum Swaps and K Together

{% embed url="https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1/" %}

<details>

<summary>Question</summary>

Given an array `arr` of `n` positive integers and a number `k`. One can apply a swap operation on the array any number of times, i.e choose any two indexes `i` and `j` `(i < j)` and swap `arr[i]`, `arr[j]`. Find the **minimum** number of swaps required to bring all the numbers less than or equal to `k` together, i.e. make them a contiguous subarray.

**Example 1:**

```
Input : 
arr[ ] = {2, 1, 5, 6, 3} 
K = 3
Output : 
1
Explanation:
To bring elements 2, 1, 3 together,
swap index 2 with 4 (0-based indexing),
i.e. element arr[2] = 5 with arr[4] = 3
such that final array will be- 
arr[] = {2, 1, 3, 6, 5}
```

**Example 2:**

```
Input : 
arr[ ] = {2, 7, 9, 5, 8, 7, 4} 
K = 6 
Output :  
2 
Explanation: 
To bring elements 2, 5, 4 together, 
swap index 0 with 2 (0-based indexing)
and index 4 with 6 (0-based indexing)
such that final array will be- 
arr[] = {9, 7, 2, 5, 4, 7, 8}
```

&#x20;**Your Task:**\
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function **minSwap()** that takes an array **(arr)**, sizeOfArray **(n)**, an integer **K,** and return the minimum swaps required. The driver code takes care of the printing.

**Expected Time Complexity:** $$O(N)$$.

**Expected Auxiliary Space:** $$O(1)$$.

**Constraints:**

$$1 ≤ N ≤ 10^5$$

$$1 ≤ Arr_i, K ≤10^7$$

</details>

### Sliding Window

<details>

<summary>Logic</summary>

1. `arr = {9 6 3 2  8 7 1 5 3} k = 3`
2. Elements less than equal to 3 are `group = {1 2 3 3}`
3. There are `4` elements that are less than equal to `k`
4. We need to get these 4 elements together
5. Let's take a window of size 4 and slide it through the array
   1. Count the number of elements that are not part of the `group`
   2. These many elements need to be "swapped in"
      1. Let this be `swapCount`
         1. The minimum value of this `swapCount` is the result

</details>

<details>

<summary>Code</summary>

```cpp
int minSwap(int arr[], int n, int k) {
    int windowSize = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] <= k)
            windowSize++;
       
    // first window   
    int partOfGroupInWindow = 0;
    for(int i = 0; i < windowSize; i++)
        if(arr[i] <= k)
            partOfGroupInWindow++;
            
    int swapsRequired = windowSize - partOfGroupInWindow;
    int minimumSwapsRequired = swapsRequired;
    
    // slide the window
    for(int i = windowSize; i < n; i++) {
        if(arr[i - windowSize] <= k)
            partOfGroupInWindow--;
        if(arr[i] <= k)
            partOfGroupInWindow++;
            
        swapsRequired = windowSize - partOfGroupInWindow;
        minimumSwapsRequired = min(minimumSwapsRequired, swapsRequired);
    }
    
    return minimumSwapsRequired;
    
}
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n)$$

Space Complexity: $$O(n)$$

</details>
