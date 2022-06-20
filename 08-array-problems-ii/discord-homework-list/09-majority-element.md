# 09 Majority Element

{% embed url="https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1" %}

<details>

<summary>Question</summary>



Given an array `A` of `N` elements. Find the majority element in the array. A majority element in an array `A` of size `N` is an **element that appears more than N/2 times in the array**.\
&#x20;

**Example 1:**

```
Input:
N = 3 
A[] = {1,2,3} 
Output:
-1
Explanation:
Since each element in 
{1,2,3} appears only once so there 
is no majority element.
```

**Example 2:**

```
Input:
N = 5 
A[] = {3,1,3,3,2} 
Output:
3
Explanation:
Since 3 is present more
than N/2 times, so it is 
the majority element.
```

**Expected Time Complexity:** $$O(N)$$

**Expected Auxiliary Space:** $$O(1)$$****

**Constraints:**

$$1 ≤ N ≤ 10^7$$​

$$0 ≤ A_i ≤ 10^6$$

</details>

### Using map

<details>

<summary>Logic</summary>

1. Store the frequency of each element in a map
2. Report the element having a frequency greater than $$\frac{n}{2}$$​

</details>

<details>

<summary>Code</summary>

```cpp
int majorityElement(int a[], int size)
{    
    map<int, int> frequency;

    for(int i = 0; i < size; i++)
        frequency[a[i]]++;
        
    for(auto p: frequency)
        if(p.second > size/2)
            return p.first;
            
    return -1;    
}
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n)$$​

Space Complexity: $$O(n)$$

</details>

