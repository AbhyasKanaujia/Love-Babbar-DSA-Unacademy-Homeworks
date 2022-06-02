# 08 Minimize the Heights II

{% embed url="https://practice.geeksforgeeks.org/problems/minimize-the-heights-i/1" %}

```cpp
int getMinDiff(int arr[], int n, int k) {
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];
    
    for(int i = 1; i < n; i++) {
        int maxi = max(arr[n - 1] - k, arr[i - 1] + k);
        int mini = min(arr[0] + k, arr[i] - k);
        
        ans = min(ans, maxi - mini);
    }
    
    return ans;
}
```
