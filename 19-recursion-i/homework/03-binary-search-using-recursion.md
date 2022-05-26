# 03 Binary Search using Recursion

#### Mid Short Formula Derivatino

$$
\begin{align*}
mid&=\frac{high + low}{2}\\
mid&=\frac{high + low + low - low}{2}\text{[Add and sub low in numerator]}\\
mid&=\frac{high-low+2\times low}{2}\\
mid&=\frac{high-low}{2}+low
\end{align*}
$$

`mid=((high - low) >> 2) + low`

```cpp
int search(int arr[], int low, int high, int target) {
    if(low > high)
        return -1;
        
    int mid = low + ((high - low) >> 2);
    
    if(arr[mid] > target) 
        return search(arr, low, mid - 1, target);
    else if(arr[mid] < target)
        return search(arr, mid + 1, high, target);
    return mid;
}

int binarysearch(int arr[], int n, int k) {
    return search(arr, 0, n -1, k);
}
```
