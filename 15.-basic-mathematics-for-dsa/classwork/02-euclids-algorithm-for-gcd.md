# 02 Euclid's Algorithm for GCD

Eculid's Formla for GCD:

$$
\text{GCD}(a,b) = \text{GCD}(a\%b, b)
$$

#### Recursive Method&#x20;

```cpp
function gcd(a, b) {
  var R;
  while ((a % b) > 0)  {
    R = a % b;
    a = b;
    b = R;
  }
  return b;
}
int GCD(int a, 
```

{% embed url="https://leetcode.com/problems/find-greatest-common-divisor-of-array/" %}
LeetCode questions that uses GCD
{% endembed %}

