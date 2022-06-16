# Math

| Problem        | Approach              |
| -------------- | --------------------- |
| Primality Test | Sieve of Eratosthenes |

## GCD Euclid's Formula

[See Main Article](../15.-basic-mathematics-for-dsa/classwork/02-euclids-algorithm-for-gcd.md)

$$
\text{GCD}(a, b) = \left\{
\begin{array}{ll}
      b & \text{when } a = 0 \\
      a & \text{when } b = 0 \\
      GCD(a \% b, b) & \text{when } a > b \\
      GCD(a, b \% a) & \text{when } b > a \\
\end{array} 
\right.
$$

## Fast Exponentiation

[See Main Article](../15.-basic-mathematics-for-dsa/classwork/03-fast-exponentiation.md)

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



## Compare Numbers Represented as String

```cpp
bool compare(string s1, string s2) { // is s1 smaller than s2
    if(s1.length() == s2.length()) 
        return s1 < s2;
    return s1.length() < s2.length();
}
```

Useful when comparing extremely large numbers that cannot otherwise be stored in any other data type

## Removing Leading 0s from a Number in String

```cpp
string removeLeadingZeros(string str) {
    int zeros = 0;
    while(zeros < str.size() && str[zeros] == '0')
        zeros++;
        
    return str.substr(zeros);
}
```

## Compare double type numbers

```cpp
if(abs(a - b) < 1e-9)
	cout << "Same";
else
	cout << "Not Same";
```

Two double-type numbers could be the same but could evaluate as false due to precision error when compared using `==` for equality.

Another way to say that two double numbers are equal is to say that the distance between them is  less than $$\epsilon$$​, where $$\epsilon$$ is a very small number.​

## Check whether a double type contains Integer

```cpp
inline bool isInteger(const double &x) {
    return (x - (int)x != 0);
}
```

If a number is  not an integer, for example, 5.5, then its difference with its integer part will be non-zero.

If it is an integer, then the difference is 0. &#x20;

$$
5.5-5=0.5 \ne 0\\ 5.0-5=0
$$

## $$^nC_r$$

```cpp
int nCr(int n, int r) {
    if(n == 0 || r == 0 || n == r)
        return 1;

    r = min(r, n - r);

    int res = 1;
    for(int i = 1; i <= r; i++) 
        res = res * (n - i + 1) / i;
    
    return res;
}
```

Time Complexity: $$O(min(r, n - r))$$

## Power of two

```cpp
(n & (n - 1) == 0) ? "Yes" : "No";
```

​
