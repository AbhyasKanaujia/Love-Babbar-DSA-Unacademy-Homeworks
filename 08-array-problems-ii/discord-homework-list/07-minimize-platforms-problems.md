# 07 Minimize Platforms Problems

```cpp
int findPlatform(int arr[], int dep[], int n)
{
    
    sort(arr, arr + n);
    sort(dep, dep + n);
    
    int platform = 1, result = 1;
    int i = 1, j = 0;
    
    while(i < n && j < n) {
        if(arr[i] <= dep[j]) {
            platform++;
            i++; 
        } else if(arr[i] > dep[j]) {
            platform--;
            j++;
        }
        
        result = max(result, platform);
    }
    
    return result;
}
```
