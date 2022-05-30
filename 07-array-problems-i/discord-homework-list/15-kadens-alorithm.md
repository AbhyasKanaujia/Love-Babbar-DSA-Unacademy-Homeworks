# 15 Kaden's Alorithm

{% embed url="https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1/" %}

### Naive Approach

<details>

<summary>Logic</summary>

1. Generate all subarrays
   1. Calculate the sum
      1. return max sum

</details>

<details>

<summary>Code</summary>

```cpp
long long maxSubarraySum(int arr[], int n){
    long long maxSum = INT_MIN;
    
    for(int size = 1; size <= n; size++) // loop for size from 1 to n
        for(int start = 0; start <= n - size; start++) { // start from 0 to totalSize - CurrentSize
            long long sum = 0;
            for(int i = start; i < size + start; i++)
                sum += arr[i];
            maxSum = max(maxSum, sum);
        }
                
        
    return maxSum;
    
}
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n^3)$$

Space Complexity: $$O(1)$$

</details>

Using Kaden's Algorithm

<details>

<summary>Logic</summary>

1. Calculate the running sum
   1. Update max sum with the running sum
   2. If the running sum is purely negative
   3. the next element is the running sum
   4. else add the next element to the running sum

</details>

<details>

<summary>Code</summary>

```cpp
long long maxSubarraySum(int arr[], int n){
    
    int sum = 0;
    int maxSum = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        if(sum < 0)
            sum = arr[i];
        else 
            sum += arr[i];
        
        maxSum = max(maxSum, sum);
    }
    
    return maxSum;
}
```

</details>

<details>

<summary>Complexites</summary>

Time Complexity: $$O(n)$$

Space Complexity: $$O(1)$$

</details>
