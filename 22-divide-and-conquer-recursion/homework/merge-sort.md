# Merge Sort

### Using vector and pointers

```cpp
void merge(int arr[], int l, int m, int r)
{
    vector<int> left(arr + l, arr + m + 1);
    vector<int> right(arr + m + 1, arr + r + 1);
    
    int index = l;
    
    int p1 = 0, p2 = 0;
    
    while(p1 < left.size() && p2 < right.size()) 
        if(left[p1] < right[p2])
            arr[index++] = left[p1++];
        else
            arr[index++] = right[p2++];
            
    while(p1 < left.size())
        arr[index++] = left[p1++];
        
    while(p2 < right.size())
        arr[index++] = right[p2++];
        
    
}

void mergeSort(int arr[], int l, int r)
{
    if(l < r) {
        int mid = r + ((l - r) >> 1);
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
```

### Using Iterator

```cpp
void merge(int arr[], int l, int m, int r)
{
    vector<int> left(arr + l, arr + m + 1);
    vector<int> right(arr + m + 1, arr + r + 1);
    
    int arrIndex = l;
    
    vector<int>::iterator leftVal = left.begin(), rightVal = right.begin();
    
    while(leftVal != left.end() && rightVal != right.end()) 
        arr[arrIndex++] =  (*leftVal < *rightVal) ? *(leftVal++) : *(rightVal++);
        
    while(leftVal != left.end())
        arr[arrIndex++] = *(leftVal++);
        
    while(rightVal != right.end())
        arr[arrIndex++] = *(rightVal++);
}

void mergeSort(int arr[], int l, int r)
{
    if(l < r) {
        int mid = l + ((r - l) >> 1);
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
```
