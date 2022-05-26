# 03 Fast Exponentiation

Fast Exponentiation Formula

$$
x^n=\left\{
\begin{array}{ll}
x^\frac{n}{2}\times x^\frac{n}{2}&\text{when x is even and } n >= 0 \\
x^\frac{n}{2}\times x^\frac{n}{2} \times x&\text{when x is odd and } n >= 0 \\
x^\frac{n}{2}\times x^\frac{n}{2}&\text{when x is even and } n < 0 \\
x^\frac{n}{2}\times x^\frac{n}{2} \times \frac{1}{x} &\text{when x is odd and } n < 0 \\
\end{array}
\right.
$$

{% embed url="https://leetcode.com/problems/powx-n/submissions/" %}
LeetCode: Pow(x, n)
{% endembed %}

<details>

<summary><mark style="color:green;">100% fastest solution</mark></summary>

```cpp
double myPow(double x, int n) {
    if(n == 0)
        return 1;
    double temp = myPow(x, n / 2);
    return temp * temp * ((n & 1) ? ((n >= 0) ? x : (1 / x)) : 1);
}
```

</details>

<details>

<summary>Same solution, easy to understand</summary>

```cpp
double myPow(double x, int n) {
    if(n == 0)
        return 1;
    double temp = myPow(x, n / 2);
    if(n & 1) {
        if(n >= 0)
            return temp * temp * x;
        else 
            return temp * temp / x;
    } else 
        return temp * temp;
}
```

</details>
