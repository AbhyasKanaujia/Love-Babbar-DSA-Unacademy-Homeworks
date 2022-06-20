# 04 Subarrays with equal 0s and 1s

{% embed url="https://practice.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1/" %}

<details>

<summary>Question</summary>

Given an array of 0s and 1s. Find the length of the largest subarray with an equal number of 0s and 1s.

**Example 1:**

```
Input:
N = 4
A[] = {0,1,0,1}
Output: 4
Explanation: The array from index [0...3]
contains equal number of 0's and 1's.
Thus maximum length of subarray having
equal number of 0's and 1's is 4.
```

**Example 2:**

```
Input:
N = 5
A[] = {0,0,1,0,0}
Output: 2
```

</details>

### Using map and subarray sum 0 zero approach

<details>

<summary>Logic</summary>

1. For given input `0 0 1 0 0`
2. Assume 0s as -1 and 1s as 1
3. The input becomes `-1 -1 1 -1 -1`
4. Take The prefix Sum
5. `-1 -2 -1 -2 -3`
6. Wherever the prefix sum is 0
   1. We know that sum of prefix from the beginning to that position is 0
7. Whenever we find two same prefix sum
   1. We know that the sum of elements after the first occurrence and the last occurrence is 0
8. The sum being 0 implies that there are an equal number of -1 and 1&#x20;
   1. Which in turn implies that there are an equal number of 0s and 1s

</details>

<details>

<summary>Code</summary>

```cpp
int maxLen(int arr[], int N)
{
    vector<int> prefix(N);
    prefix[0] = {arr[0] == 0 ? -1 : 1};
    for(int i = 1; i < N; i++)
        prefix[i] = prefix[i - 1] + (arr[i] == 0 ? -1 : 1);
        
    int maxm = 0;
    
    for(int i = 0; i < N; i++)
        if(prefix[i] == 0)
            maxm = max(maxm, i + 1);
            
    map<int, int> index;
    for(int i = 0; i < N; i++) 
        if(index.count(prefix[i]))
            maxm = max(maxm, i - index[prefix[i]]);
        else
            index[prefix[i]] = i;
            
            
    return maxm;
}
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n)$$​

Space Complexity: $$O(n)$$​

</details>
