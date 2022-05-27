# 🧪 Formula List

### Arrays

1. Addrss of index `i` = `base address` + `index` \* `size` of each element

### Binary Search

#### Mid

$$
mid=low+((high-low)>>1)
$$

:bomb: `mid = low + (high - low) >> 1` will not work. >>'s precedence is lower, so it needs to be in paranthesis.&#x20;

### Math

#### Primality Test

* Sieve of Eratosthenes

#### GCD Euclid's Formula

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

#### Fast Exponentiation

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

### String

#### Palindrome Test

* Two Pointer approach

#### Anagram Test (aka permutation of string)

* Number of each character in both string will be same
  * Use Map or lookup table

