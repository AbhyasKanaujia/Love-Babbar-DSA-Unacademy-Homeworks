# 03 Number Complement

{% embed url="https://leetcode.com/problems/number-complement/submissions/" %}
LeetCode Question: Number Complement
{% endembed %}

```cpp
int findComplement(int num) {
    int mask = 0;
    while(mask < num) 
        mask = (mask << 1) | 1;

    int ans = num ^ mask;
    return ans;
}
```
