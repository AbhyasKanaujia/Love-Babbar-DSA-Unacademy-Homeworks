# 04 Pattern Programs

{% embed url="https://drive.google.com/drive/folders/1lB0Ccq_JpdS7j30Kt2UYOYjbuCyvXBne" %}
Questions from Google Drive&#x20;
{% endembed %}

### Set 1

#### Half Pyramid

```cpp
n = 6;
for(int i = 1; i <= 6; i++) {
    for(int j = 1; j <= i; j++)
        cout << "* ";
    cout << endl;
}
```

```
*
* *
* * *
* * * *
* * * * *
* * * * * *
```

#### Inverted Half Pyramid

```cpp
n = 6;
for(int i = 1; i <= n; i++){
    for(int j = n; j >= i; j--)
        cout << "* ";
    cout << endl;
}
```

```
* * * * * *
* * * * *
* * * *
* * *
* *
*
```

#### Hollow Inverted Half Pyramid

```cpp
n = 7;
for(int i = 1; i <= n; i++) {
    for(int j = n; j >= i; j--)
        if(i == 1 || i == n)
            cout << "* ";
        else if(j == i || j == n)
            cout << "* ";
        else
            cout << "  ";
    cout << endl;
}
```

```
* * * * * * *
*         *
*       *
*     *
*   *
* *
*
```

#### Full Pyramid

```cpp
n = 7;
for(int i = 1; i <= n; i++) {
    for(int sp = n; sp > i; sp--)
        cout << " ";
    for(int j = 1; j <= i; j++)
        cout << "* ";
    cout << endl;
}
```

```
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
* * * * * * *
```

#### Inverted Full Pyramid

```cpp
n = 7;
for(int i = 1; i <= n; i++) {
    for(int sp = 1; sp < i; sp++)
        cout << " ";
    for(int j = n; j >= i; j--)
        cout << "* ";
    cout << endl;
}
```

```
* * * * * * *
 * * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
```

#### Hollow Full Pyramid

```cpp
n = 7;
for(int i = 1; i <= n; i++) {
    for(int sp = n; sp > i; sp--)
        cout << " ";
    for(int j = 1; j <= i; j++)
        if(i == 1 || i == n)
            cout << "* ";
        else if(j == 1 || j == i)
            cout << "* ";
        else
            cout << "  ";
    cout << endl;
}
```

```
      *
     * *
    *   *
   *     *
  *       *
 *         *
* * * * * * *
```

### Set 2

#### Half Pyramid

```cpp
n = 5;
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++)
        cout << j << " ";
    cout << endl;
}
```

```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

#### Inverted Half Pyramid

```cpp
n = 5;
for(int i = 1; i <= n; i++) {
    for(int j = n; j >= i; j--)
        cout << (n - j + 1) << " ";
    cout << endl;
}
```

```
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
```

#### Hollow Half Pyramid

```cpp
n = 5;
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++)
        if(i == 1 || i == n)
            cout << j << ' ';
        else if(j == 1 || j == i)
            cout << j << ' ';
        else
            cout << "  ";
    cout << endl;
}
```

```
1
1 2
1   3
1     4
1 2 3 4 5
```

#### Full Pyramid

```cpp
n = 5;
for(int i = 1; i <= n; i++) {
    for(int sp = n; sp > i; sp--)
        cout << "  ";
    // left half of the pyramid
    for(int j = i; j < 2 * i; j++)
        cout << j << ' ';
    // right half of the pyramid
    for(int j = 2 * i - 2; j >= i; j--)
        cout << j << ' ';
    cout << endl;
}
```

```
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
```

#### Hollow Full Pyramid

```cpp
n = 5;
for(int i = 1; i <= n; i++) {
    for(int sp = n; sp > i; sp--)
        cout << ' ';
    for(int j = 1; j <= i; j++)
        if(i == 1 || i == n)
            cout << j << ' ';
        else if(j == 1)
            cout << 1 << ' ';
        else if(j == i)
            cout << i << ' ';
        else
            cout << "  ";
    cout << endl;
}
```

```
    1
   1 2
  1   3
 1     4
1 2 3 4 5
```

#### Hollow Inverted Half Pyramid

```cpp
n = 5;
for(int i = 1; i <= n; i++) {
    for(int j = n; j >= i; j--)
        if(i == 1 || i == n)
            cout << (n - j + 1) << ' ';
        else if(j == n)
            cout << i << ' ';
        else if(j == i)
            cout << n << ' ';
        else
            cout << "  ";
    cout << endl;
}
```

```
1 2 3 4 5
2     5
3   5
4 5
1
```

### Set 3: Palindrome Pyramid Patterns

#### Pattern 3.1

```cpp
n = 5;
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++)
        cout << j << ' ';
    for(int j = 1; j < i; j++)
        cout << i - j << ' ';
    cout << endl;
}
```

```
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
```

#### Pattern 3.2

```cpp
n = 5;
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++)
        cout << (char)('A' + j - 1) << ' ';
    for(int j = 1; j < i; j++)
        cout << (char)('A' + i - j - 1) << ' ';
    cout << endl;
}
```

```
A
A B A
A B C B A
A B C D C B A
A B C D E D C B A
```

#### Pattern 3.3

```cpp
n = 5;
for(int i = 1; i <= n; i++) {
    for(int sp = n; sp > i; sp--)
        cout << "  ";
    // left half of pyramid
    for(int j = 1; j <= i; j++)
        cout << j << ' ';
    // righ half of pyramid
    for(int j = 1; j < i; j++)
        cout << i - j << ' ';
    cout << endl;
}
```

```
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
```

#### Pattern 3.4

```cpp
n = 5;
for(int i = 1; i <= n; i++) {
    for(int star = 2 * n - 1; star > i; star--)
        cout << "*";
    for(int j = 1; j <= i; j++)
        cout << i << "*";
    for(int star = 2 * n - 1; star > i; star--)
        cout << "*";
    cout << endl;
}
```

```
********1*********
*******2*2********
******3*3*3*******
*****4*4*4*4******
****5*5*5*5*5*****
```

### Set 4

#### Solid Diamond

```cpp
n = 10;
for(int i = 1; i <= n / 2; i++) {
    for(int sp = n / 2; sp > i; sp--)
        cout << ' ';
    for(int j = 1; j <= i; j++)
        cout << "* ";
    cout << endl;
}
for(int i = 1; i <= n / 2; i++) {
    for(int sp = 1; sp < i; sp++)
        cout << ' ';
    for(int j = n / 2; j >= i; j--)
        cout << "* ";
    cout << endl;
}
```

```
    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *
```

#### Hollow Diamond

```cpp
int n = 5;
for(int i = 1; i <= 5; i++) {
    for(int sp = n; sp > i; sp--)
        cout << " ";
    for(int j = 1; j <= i; j++)
        cout << ((j == 1 || j == i) ? "* " : "  ");
    cout << endl;
}

for(int i = 1; i <= 5; i++) {
    for(int sp = 1; sp < i; sp++)
        cout << " ";
    for(int j = n; j >= i; j--)
        cout << ((j == n || j == i) ? "* " : "  ");
    cout << endl;
}
```

```
    *
   * *
  *   *
 *     *
*       *
*       *
 *     *
  *   *
   * *
    *
```

#### Solid Half Diamond

```cpp
int n = 5;
for(int i = 1; i <= 5; i++) {
    for(int j = 1; j <= i; j++)
        cout << "* ";
    cout << endl;
}

for(int i = 1; i < n; i++) {
    for(int j = n; j > i; j--)
        cout << "* ";
    cout << endl;
}
```

```
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
```

### Set 5
