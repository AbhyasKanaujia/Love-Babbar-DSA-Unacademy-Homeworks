# 01 Powerset

{% embed url="https://leetcode.com/problems/subsets/" %}
LeetCode: Subset
{% endembed %}

<details>

<summary>Question</summary>

Given an integer array `nums` of **unique** elements, return _all possible subsets (the power set)_.

The solution set **must not** contain duplicate subsets. Return the solution in **any order**.

#### **Example 1:**

```
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
```

#### **Example 2:**

```
Input: nums = [0]
Output: [[],[0]]
```

#### **Constraints:**

* `1 <= nums.length <= 10`
* `-10 <= nums[i] <= 10`
* All the numbers of `nums` are **unique**.

</details>

### Using DFS

<details>

<summary>Logic</summary>

1. In every recursive call either include or exclude an element.

</details>

<details>

<summary>Code</summary>

```cpp
typedef vector<int> vi;
typedef vector<vi> vvi;

vvi res;

void getSubsets(const vi &nums, int i, vi &subset) {
    if(i == nums.size())
        res.push_back(subset);
    else {
        getSubsets(nums, i + 1, subset);
        subset.push_back(nums[i]);       
        getSubsets(nums, i + 1, subset);
        subset.pop_back();
    }
}

vvi subsets(vi& nums) {
    vi *subset = new vector<int>;
    getSubsets(nums, 0, *subset);
    delete subset;
    return res;
}
```

</details>
