# Find max and min element in an array

[Question Link](https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1/)

## Solution

1. make a `result pair` with `max` and `min` element
2. For each element update minimum between current minimum and current element
3. For each element update maximum between current maximum and current element
4. return `result pair`

```cpp

#define ll long long

pair<ll, ll> getMinMax(ll a[], int n) {
  pair<ll, ll> res = make_pair(INT_MAX, INT_MIN);

  for(int i = 0; i < n; i++) {
    res.first = min(res.first, a[i]);
    res.second = max(res.second, a[i]);
  }

  return res;
}
```
