# 03 Non-Repeating Element

{% embed url="https://practice.geeksforgeeks.org/problems/non-repeating-element3958/1/" %}

<details>

<summary>Question</summary>

Find the first non-repeating element in a given array ** `arr`** of `N` integers.\
**Note:** Array consists of only positive and negative integers and **not zero**.

**Example 1:**

```
Input : arr[] = {-1, 2, -1, 3, 2}
Output : 3
Explanation:
-1 and 2 are repeating whereas 3 is 
the only number occurring once.
Hence, the output is 3. 
```

&#x20;

**Example 2:**

```
Input : arr[] = {1, 1, 1}
Output : 0
```

\
**Expected Time Complexity:** $$O(N)$$\
**Expected Auxiliary Space:** $$O(N)$$

**Constraints:**

****$$1 <= N <= 10^7$$

$$-10^{16} <= A_i <= 10^{16}$$​

$${A_i \ne0 }$$​

</details>

### Using map

<details>

<summary>Logic</summary>

1. Create a map of frequencies
2. Traverse the array from left to right
   1. If the element has frequency 1 in the map then return the element
3. If no such element is found, return -1

</details>

<details>

<summary>Code</summary>

```cpp
int firstNonRepeating(int arr[], int n) 
{ 
    map<int, int> frequency;
    
    for(int i = 0; i < n; i++)
        frequency[arr[i]]++;
        
    for(int i = 0; i < n; i++)
        if(frequency[arr[i]] == 1)
            return arr[i];
            
    return -1;
} 
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n)$$​

Space Complexity: $$O(n)$$​

</details>
