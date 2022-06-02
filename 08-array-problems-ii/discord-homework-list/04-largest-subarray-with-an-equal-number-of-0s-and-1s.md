# 04 Largest subarray with an equal number of 0s and 1s

{% embed url="https://practice.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1/" %}

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
