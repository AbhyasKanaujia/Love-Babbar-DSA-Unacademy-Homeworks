# 01 LeetCode: Power of Two

{% embed url="https://leetcode.com/problems/power-of-two/" %}
LeetCode: Power of Two
{% endembed %}

<details>

<summary>Solution</summary>

```cpp
bool isPowerOfTwo(int n) {
    return n > 0 && !(n & (n - 1));
}
```

All 2^n results in a numbe with bianry representation: like ...0001000..

Eg.  1 -> 0001, 2 -> 0010 , 4 -> 0100, 8 -> 1000

Every 2^n - 1 results in a number with binar representation like ...00001111...

Eg 3 -> 00011, 7-> 000111, 15 -> 0001111 etc.

Anding these term should result in 0.

Edge Case: Given number should be strictly positive number.

</details>
