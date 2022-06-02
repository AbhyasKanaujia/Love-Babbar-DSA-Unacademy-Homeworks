# 02 First Repeating Element

{% embed url="https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1/" %}

<details>

<summary>Question</summary>

Given an array `arr[]` of size `n`, find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.

### **Example 1**

```
Input:
n = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2
Explanation: 
5 is appearing twice and 
its first appearence is at index 2 
which is less than 3 whose first 
occuring index is 3.
```

### **Example 2**

```
Input:
n = 4
arr[] = {1, 2, 3, 4}
Output: -1
Explanation: 
All elements appear only once so 
the answer is -1.
```

The function `firstRepeated()` takes `arr` and `n` as input parameters and returns the position of the first repeating element. If there is no such element -1 is returned.\
1-based indexing is used.

**Expected Time Complexity:** $$O(n)$$

**Expected Auxilliary Space:** $$O(n)$$****

### **Constraints**

$$1 \le n \le 10^6$$

$$0 \le A_i \le 10^6$$​

</details>

### Naive Approach

<details>

<summary>Logic</summary>

1. Run two nested loops
2. For every element from the outer loop
   1. Check all the elements after that element&#x20;
      1. If the same element is found then return the iterator of the outer loop
3. If still nothing found then return -1

</details>

<details>

<summary>Code</summary>

```cpp
int firstRepeated(int arr[], int n) {
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(arr[i] == arr[j])
                return i + 1;
                
    return -1;
}
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n^2)$$

Space Complexity: $$O(1)$$​

</details>
