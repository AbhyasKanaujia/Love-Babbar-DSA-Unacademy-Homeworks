# 09 Find duplicates in an array of n + 1 integers

{% embed url="https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1" %}

<details>

<summary>Question</summary>

Given an array a\[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.

**Example 1:**

```
Input:
N = 4
a[] = {0,3,1,2}
Output: -1
Explanation: N=4 and all elements from 0
to (N-1 = 3) are present in the given
array. Therefore output is -1.
```

**Example 2:**

```
Input:
N = 5
a[] = {2,3,1,2,3}
Output: 2 3 
Explanation: 2 and 3 occur more than once
in the given array.
```

**Your Task:**\
Complete the function **duplicates()** which takes array a\[] and n as input as parameters and returns a list of elements that occur more than once in the given array in sorted manner. If no such element is found, return list containing \[-1].&#x20;

**Expected Time Complexity:** O(n).\
**Expected Auxiliary Space:** O(n).\
Note : The extra space is only for the array to be returned.\
Try and perform all operation withing the provided array.&#x20;

**Constraints:**\
1 <= N <= 105\
0 <= A\[i] <= N-1, for each valid i

</details>

### Using \`map\`

<details>

<summary>Logic</summary>

1. Count each element in a `map<int, int>`&#x20;
2. &#x20;If count is more than one then repeated
   1. store in `res`
3. return `res`

</details>

<details>

<summary>Code</summary>

```cpp
vector<int> duplicates(int arr[], int n) {
    map<int, int> freq;
    for(int i = 0; i < n; i++)
        freq[arr[i]]++;
        
    vector<int> res;
        
    for(pair<int, int> p: freq) 
        if(p.second > 1) 
            res.push_back(p.first);
    
    if(!res.size())
        res.push_back(-1);
    
    return res;
}
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n)$$

Space Complexity: $$O(n)$$

</details>

### Negation Technique

<details>

<summary>This won't work. But Why?</summary>

The negation of zero doesn't change anything. Some repetitions will be impossible to follow due to the presence of zero. So this technique will not work.

</details>

### Increment and divide by \`n\`

<details>

<summary>Logic</summary>

1. For every number in the array
   1. Use it as an index
      1. Increment the value at that index by `n`
      2. The number that repeats once will make that index incremet by n only once.&#x20;
      3. But the number that repeates 2 times will increment that index twice and so on.&#x20;
2. Scan the array again
   1. Try dividing each value by `n`
      1. If it has been incremented by `n` only once, then the quotient will be $$[1, 2)$$
      2. If it has been incremented twice then the quotient will be $$[2, 3)$$ and so on.
   2. Every numeber that has a quotient more than 1 has been incremented more than once
      1. This implies that the number appeared more than once.&#x20;
         1. Insert this value into `res`
3. return `res`

</details>

<details>

<summary>Code</summary>

```cpp
vector<int> duplicates(int arr[], int n) {
     for(int i = 0; i < n; i++)
        arr[arr[i] % n] += n;
        
    vector<int> res;
    
    for(int i = 0; i < n; i++)
        if(arr[i] / n > 1)
            res.push_back(i);
            
    if(res.empty()) 
        res.push_back(-1);
    return res;
}
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n)$$

Space Complexity: $$O(1)$$

Drawbacks: Modifies the given array

</details>
