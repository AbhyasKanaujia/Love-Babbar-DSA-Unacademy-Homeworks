# 02 Optimal Strategy for a Game

{% embed url="https://practice.geeksforgeeks.org/problems/optimal-strategy-for-a-game-1587115620/1/" %}
GeeksForGeeks Question
{% endembed %}

<details>

<summary>TLE Solution discussed in class</summary>

```cpp
long long optimalStrategy(int arr[], int i, int j) {
    //BASE CASE
    if(i > j)
        return 0;
    
    long long choice1 = arr[i] + min(optimalStrategy(arr, i + 2, j), optimalStrategy(arr, i + 1, j - 1));
    long long choice2 = arr[j] + min(optimalStrategy(arr, i + 1, j - 1), optimalStrategy(arr, i, j - 2));
    
    long long ans = max(choice1, choice2);
    return ans;
}
long long maximumAmount(int arr[], int n){
    return optimalStrategy(arr, 0, n - 1); 
}
```

</details>
