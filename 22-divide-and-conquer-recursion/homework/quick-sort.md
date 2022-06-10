# Quick Sort

```cpp
void quickSort(int arr[], int low, int high)
{    
    if(low < high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

public:
int partition (int arr[], int low, int high)
{
    int pivot = arr[low];
    
    // count smaller
    int smaller = 0;
    for(int i = low + 1; i <= high; i++)
        smaller += arr[i] <= pivot;
    
    // right place for pivot
    int pivotIndex = low + smaller;
    
    // swap pivot to right position
    swap(arr[low], arr[pivotIndex]);
    
    // left smaller & right larger
    int i = low, j = high;
    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivot)
            i++;
        while(arr[j] > pivot)
            j--;
        if(i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);
    }
    
    // return new pivot 
    return pivotIndex;
}
```

