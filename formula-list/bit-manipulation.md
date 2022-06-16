# Bit Manipulation

## Check if bit is set

```cpp
bool isSet(int num, int posFromRight) {
    return num & (1 << (posFromRight - 1));
}
```

## Set a bit

```cpp
int set(int num, int posFromRight) {
    return num | (1 << (posFromRight - 1));
}
```

## Multiply by 2^k

$$num \times 2^k$$

```cpp
int multiply(int num, int k) {
    return num << k; // num * 2 ^ k
}
```

## Check if a number is odd or even

```cpp
bool isEven(int num) {
    return (num & 1) ? true : false;
}
```
