# 🧪 Formula List

## Arrays

1. Address of index `i` = `base address` + `index` \* `size` of each element
2. When working with a group of people in a circular arrangement(or any similar situation), think of how a `queue` might be used here.&#x20;

## Binary Search

### Mid

$$
mid=low+((high-low)>>1)
$$

:bomb: `mid = low + (high - low) >> 1` will not work. >>'s precedence is lower, so it needs to be in parenthesis.&#x20;

## Math

### Primality Test

* Sieve of Eratosthenes

### GCD Euclid's Formula

[View Main Article](15.-basic-mathematics-for-dsa/classwork/02-euclids-algorithm-for-gcd.md)

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

### Fast Exponentiation

[View Main Article](15.-basic-mathematics-for-dsa/classwork/03-fast-exponentiation.md)

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

### Compare Numbers Represented as a String

```cpp
bool compare(string s1, string s2) { // is s1 smaller than s2
    if(s1.length() == s2.length()) 
        return s1 < s2;
    return s1.length() < s2.length();
}
```

### Compare double type numbers

```cpp
if(abs(a - b) < 1e-9)
	cout << "Same";
else
	cout << "Not Same";
```

Two double type numbers could be the same but could evaluate as false due to precision error when compared using `==` for equality.

So a better way to say that two double numbers are equal is to say that the distance between them is going to be less than $$\epsilon$$ where $$\epsilon$$ is a very small number.

### nCr

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

Time Complexity: $$O(min(r, n - r))$$​

## String

### Palindrome Test

* Two Pointer approach

### Anagram Test (aka permutation of string)

* The number of each character in both strings will be the same
  * Use Map or lookup table

