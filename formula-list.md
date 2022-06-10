# 🧪 Formula List

## Arrays

1. Address of index `i` = `base address` + `index` \* `size` of each element
2. When working with a group of people in a circular arrangement(or any similar situation), think of how a `queue` might be used here.&#x20;

## Binary Search

### Mid

$$
mid=low+((high-low)>>1)
$$

:bomb: `mid = low + (high - low) >> 1` will not work. >>'s precedence is lower, so it needs to be in parentheses.&#x20;

## Math

### Primality Test

* Sieve of Eratosthenes

### GCD Euclid's Formula

[See Main Article](15.-basic-mathematics-for-dsa/classwork/02-euclids-algorithm-for-gcd.md)

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

[See Main Article](15.-basic-mathematics-for-dsa/classwork/03-fast-exponentiation.md)

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

### Compare Numbers Represented as String

#### If leading 0s is not a problem

```cpp
bool compare(string s1, string s2) { // is s1 smaller than s2
    if(s1.length() == s2.length()) 
        return s1 < s2;
    return s1.length() < s2.length();
}
```

#### Post removal of leading 0s

```cpp
string removeLeadingZeros(string str) {
    int zeros = 0;
    while(zeros < str.size() && str[zeros] == '0')
        zeros++;
        
    return str.substr(zeros);
}

bool compare(string num1, string num2) {
    num1 = removeLeadingZeros(num1);
    num2 = removeLeadingZeros(num2);
    
    if(num1.size() == num2.size())
        return num1 < num2;
        
    return num1.size() < num2.size();
}
```

### Compare double type numbers

```cpp
if(abs(a - b) < 1e-9)
	cout << "Same";
else
	cout << "Not Same";
```

Two double-type numbers could be the same but could evaluate as false due to precision error when compared using `==` for equality.

A way to say that two double numbers are equal is to say that the distance between them is going to be less than $$\epsilon$$ where $$\epsilon$$ is a very small number.

### Check whether a double type contains Integer

```cpp
inline bool isInteger(const double &x) {
    return (x - (int)x < 1e-9);
}
```

If a number is  not an integer, for example, 5.5, then subtracting the integer part will leave a lot more than $$\epsilon$$​

$$
5.5 - 5 = 0.5 > \epsilon
$$

Similarly, if a number is an integer e.g. 5, then subtracting the integer part will leave $$0$$.

$$
5-5=0<\epsilon
$$

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

