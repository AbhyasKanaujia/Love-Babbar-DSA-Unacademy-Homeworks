# 05 Sort 0s, 1s and 2s

{% embed url="https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1/" %}
GeeksForGeeks Question
{% endembed %}

<details>

<summary>Solution</summary>

```cpp
void sort012(int a[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    
    while(mid <= high) {
        switch(a[mid]) {
            case 0:
                swap(a[low++], a[mid++]);
            break;
            case 1:
                mid++;
            break;
            case 2:
                swap(a[mid], a[high--]);
            break;
        }
    }
}
```

Time Complexity: O(n)

Space Complexity: O(1)

</details>
