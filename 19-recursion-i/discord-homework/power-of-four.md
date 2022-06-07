# Power of Four

{% embed url="https://leetcode.com/problems/power-of-four/submissions/" %}
LeetCode Question: Power of Four
{% endembed %}

### Using Log

```cpp
bool isPowerOfFour(int n) {
    double power = log(n) / log(4);
    
    double e = 1e-9;
    if(abs(power - floor(power)) < e)
        return true;
    else
        return false;
}
```

Time Complexity: $$O(1)$$​

Space Complexity: $$O(1)$$​

### Using Recursion

```cpp
bool isPowerOfFour(int n) {
    if(n < 1)
        return false;
    if(n == 1)
        return true;

    return((n % 4 == 0) && isPowerOfFour(n / 4));            
}
```

Time Complexity: $$O(\log_4 n)$$​

Space Complexity: $$O(\log_4 n)$$​ for the call stack else $$O(1)$$​
