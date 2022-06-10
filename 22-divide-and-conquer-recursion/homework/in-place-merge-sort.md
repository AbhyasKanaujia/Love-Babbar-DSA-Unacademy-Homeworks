# In-Place Merge Sort

```cpp
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    int i = low, j = mid + 1;
    
    // already sorted
    if(arr[mid] < arr[j])
        return;
    
    while(i <= mid && j <= high) 
        if(arr[i] <= arr[j])
            i++;
        else {
            int value = arr[j];
            int index = j;
            
            while(index != i) {
                arr[index] = arr[index - 1];
                index--;
            }
            arr[i] = value;
            
            i++, mid++, j++;
        }
              
}

void mergeSort(vector<int> &arr, int low, int high) {
    if(low < high) {
        int mid = low + ((high - low) >> 1);
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    vector<int> arr = {9,6,3,5,8,7};
    mergeSort(arr, 0, arr.size() - 1);
     
    for(int x: arr)
        cout << x << ' ';

    return 0;
}
```

{% embed url="https://onlinegdb.com/DCNQI7HkN" %}
Run this code online
{% endembed %}
