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

```c
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

### Using map

<details>

<summary>Logic</summary>

1. `firstRepeating = -1` stores the index of the first repeating element.&#x20;
2. We traverse the array from right to left.&#x20;
3. A set `visited` will store those elements that we have encountered on the right side of the current element.&#x20;
4. While traversing from right to left&#x20;
   1. If any element has already been visited&#x20;
      1. It is a repeating element.&#x20;
         1. Suppose this is the first occurence of the repeating element.&#x20;
            1. Update `firstRepeating`&#x20;
   2. Otherwise add it to the visited list&#x20;
5. In the end, either we have `-1` in `firstRepeating` which tells that there are no repetitive elements, or we find the index of the repeating element.

</details>

<details>

<summary>Code</summary>

```cpp
int firstRepeated(int arr[], int n) {
    int firstRepeating = -1;
    
    unordered_set<int> visited;
    
    for(int i = n - 1; i >= 0; i--) {
        if(visited.count(arr[i]))
            firstRepeating = i;
        visited.insert(arr[i]);
    }
    
    return ((firstRepeating == -1) ? -1 : firstRepeating + 1);
}
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n)$$​

Space Complexity: $$O(n)$$​

</details>

### Using set

```cpp
int firstRepeated(int arr[], int n) {
    int firstRepeating = -1;
    
    unordered_set<int> visited;
    
    for(int i = n - 1; i >= 0; i--) {
        if(visited.count(arr[i]))
            firstRepeating = i;
        visited.insert(arr[i]);
    }
    
    return ((firstRepeating == -1) ? -1 : firstRepeating + 1);
}
```
