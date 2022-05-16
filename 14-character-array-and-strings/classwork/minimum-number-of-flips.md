# Minimum number of flips

```cpp
#include <bits/stdc++.h>
using namespace std;

inline char flip(char ch)
{
  return ch == '0' ? '1' : '0';
}

int getFlips(string str, char expected)
{
  int count = 0;
  for (char ch : str)
  {
    if (ch != expected)
      count++;
    expected = flip(expected);
  }

  return count;
}

inline int getMinFlips(string str)
{
  return min(getFlips(str, '0'), getFlips(str, '1'));
}

int main()
{
  string str;
  cout << "Enter a binary string: ";
  cin >> str;

  cout << "Minimum number of flips are: ";
  cout << getMinFlips(str) << endl;
  return 0;
}
```
