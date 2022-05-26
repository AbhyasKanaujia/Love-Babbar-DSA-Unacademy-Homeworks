# 02 Reverse an Integer

#### Using Arithmetic

```cpp
long long int reverse_digit(long long int n)
{
    long long rev = 0;
    while(n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
```

#### Using String

```cpp
long long int reverse_digit(long long int n)
{
    string num = to_string(n);
    reverse(num.begin(), num.end());
    return stoll(num);
}
```
