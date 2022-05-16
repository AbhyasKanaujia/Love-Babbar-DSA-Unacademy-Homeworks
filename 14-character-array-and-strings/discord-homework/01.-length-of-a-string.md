# 01. Length of a string

```cpp
#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
  char str[MAX];

  cout << "Enter a string: ";
  cin >> str;

  int len = 0;
  while (str[len] != '\0')
    len++;

  cout << "Length of string: " << len << endl;

  return 0;
}
```
