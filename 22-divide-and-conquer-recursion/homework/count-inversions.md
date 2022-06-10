# Count Inversions

{% embed url="https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1/" %}

### Brute Force Approach

```cpp
long long int inversionCount(long long arr[], long long N)
{
    int count = 0;
    for(int i = 0; i < N; i++)
        for(int j = i + 1; j < N; j++)
            if(arr[i] > arr[j])
                count++;
                
                
    return count;
}
```

Time Complexity: $$O(n^2)$$​

Space Complexity: $$O(1)$$​

### Using Merge Sort

```cpp
typedef long long ll;
ll res = 0;

void merge(ll a[], ll left, ll mid, ll right) {
    ll i = left, j = mid + 1, k = 0;
    
    ll b[right - left + 1];
    while(i <= mid && j <= right) {
        if(a[i] <= a[j])
            b[k++] = a[i++];
        else {
            res += mid - i + 1;
            b[k++] = a[j++];
        }
    }
    
    while(i <= mid) 
        b[k++] = a[i++];
    
    while(j <= right) 
        b[k++] = a[j++];
        
    for(ll i = left, k = 0; i <= right; i++, k ++)
        a[i]  = b[k];
}

void mergeSort(ll a[], ll left, ll right) {
    if(left < right) {
        ll mid = left + ((right - left) >> 1);
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

long long int inversionCount(long long arr[], long long N)
{
    mergeSort(arr, 0, N - 1);
    return res;
}
```

Time Complexity: $$O(n\log n)$$​

Space Complexity: $$O(n)$$​ -> Can be improved with in-place merge sort
