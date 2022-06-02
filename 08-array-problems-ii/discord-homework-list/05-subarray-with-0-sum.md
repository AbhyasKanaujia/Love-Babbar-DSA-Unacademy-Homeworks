# 05 Subarray with 0 sum

{% embed url="https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1/" %}

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
