# 03 Find Min and Max in array

{% embed url="https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1" %}

<details>

<summary>Solution</summary>

```cpp
pair<long long, long long> getMinMax(long long a[], int n) {
    pair<ll, ll> res = make_pair(INT_MAX, INT_MIN);
    for(int i = 0; i < n; i++) {
        res.first = min(res.first, a[i]);
        res.second = max(res.second, a[i]);
    }
    return res;
}
```

Time Complexity: O(n)

Space Compleixty: O(1)

</details>
