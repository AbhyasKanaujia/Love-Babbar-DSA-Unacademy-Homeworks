# 14 Unique number of occurences

{% embed url="https://leetcode.com/problems/unique-number-of-occurrences/" %}
LeetCode: Unique Number of Occurrences
{% endembed %}

<details>

<summary>Question</summary>

Given an array of integers `arr`, return `true` if the number of occurrences of each value in the array is **unique**, or `false` otherwise.

&#x20;

**Example 1:**

```
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
```

**Example 2:**

```
Input: arr = [1,2]
Output: false
```

**Example 3:**

```
Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
```

&#x20;

**Constraints:**

* `1 <= arr.length <= 1000`
* `-1000 <= arr[i] <= 1000`

</details>

### Using map

<details>

<summary>Logic</summary>

1. Create a map and store frequencies of&#x20;
2. Create a second map and store the frequency of frequencies.&#x20;
3. If at any point frequency repeats then <mark style="color:red;">return false</mark>
4. else <mark style="color:green;">return true</mark>

</details>

<details>

<summary>Code</summary>

```cpp
bool uniqueOccurrences(vector<int>& arr) {
    map<int, int> frequencyOfElements;

    for(int x: arr)
        frequencyOfElements[x]++;

    map<int, int> frequencyOfFrequencies;

    for(auto p: frequencyOfElements) 
        if(++frequencyOfFrequencies[p.second] > 1)
            return false;

    return true; 

}
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n)$$

Space Complexity: $$O(n)$$

</details>
