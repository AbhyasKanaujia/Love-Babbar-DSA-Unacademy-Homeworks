# 05 Find Subarray with Sum 0

{% embed url="https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1/" %}

<details>

<summary>Question</summary>



Given an array of positive and negative numbers. Find if there is a **subarray** (of size at least one) with **0 sum**.

**Example 1:**

```
Input:
5
4 2 -3 1 6

Output: 
Yes

Explanation: 
2, -3, 1 is the subarray 
with sum 0.
```

**Example 2:**

```
Input:
5
4 2 0 1 6

Output: 
Yes

Explanation: 
0 is one of the element 
in the array so there exist a 
subarray with sum 0.
```

</details>

### Using Prefix Sum

<details>

<summary>Logic</summary>

1. Maintain a prefix sum
2. If at any point the element of the prefix sum is 0
   1. Then obviously we found that the sum form beginning till that element is 0
3. If at any point the prefix sum repeats itself
   1. We know that the sum of the element after the first occurrence to the last occurrence makes a sum of 0. This is the reason that the prefix sum was able to repeat itself.&#x20;

</details>

<details>

<summary>Code</summary>

```cpp
bool subArrayExists(int arr[], int n)
{
    vector<int> prefix(n);
    prefix[0] = arr[0];
    
    for(int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];
        
    unordered_set<int> visited;
    for(int i = 0; i < n; i++) {
        if(prefix[i] == 0)
            return true;
            
        if(visited.count(prefix[i]))
            return true;
        else 
            visited.insert(prefix[i]);
    }
            
    return false;
}
```

</details>

<details>

<summary>Complexity Analysis</summary>

Time Complexity: $$O(n)$$​

Space Complexity: $$O(n)$$​

</details>
