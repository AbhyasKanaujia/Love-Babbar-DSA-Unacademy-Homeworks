# 07 Intersection of Two Arrays

{% embed url="https://leetcode.com/problems/intersection-of-two-arrays/" %}
LeetCode: Intersection of Two Arrays
{% endembed %}

<details>

<summary>Using Set</summary>

```cpp
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    // result
    vector<int> res;

    // insert arrays into set to remove duplicates
    set<int> s1(nums1.begin(), nums1.end());
    set<int> s2(nums2.begin(), nums2.end());

    // for every element in Set 2
    // that is also in Set 1 (has count 1)
    // push to result
    for(int x: s2)
        if(s1.count(x))
            res.push_back(x);

    return res;
}
```

Time Complexity: $$O(n\log n + m \log m)$$

Space Complexity: $$O(m + n)$$

</details>
