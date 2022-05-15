# 14 Character Array and String homework

## Anagram using map

Check if a given string is an anagram using a map.

```cpp
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string str1, string str2)
{
  map<char, int> m;

  for (char ch : str1)
    m[ch]++;

  for (char ch : str2)
    m[ch]--;

  for (pair<char, int> p : m)
    if (p.second != 0)
      return false;

  return true;
}

int main()
{
  string str1, str2;
  cout << "Enter first string: ";
  cin >> str1;
  cout << "Enter second string: ";
  cin >> str2;

  cout << str1 << " is anagram of " << str2 << " is ";
  cout << boolalpha << isAnagram(str1, str2) << endl;
  return 0;
}
```

<details>
<summary>Time and space complexities</summary>

Time Complexity: $O(n)$

Space Complexity: $O(n)$

where $n$ is the length of the string.

</details>

<details>
<summary>Output</summary>

```plaintext

OUTPUT:
  Enter first string: apple
  Enter second string: mango
  apple is anagram of mango is false

OUTPUT:
  Enter first string: babbar
  Enter second string: barabb
  babbar is anagram of barabb is false
```

</details>

## Check if one string is in another

Given two string say `str1 = babbar` and `str2 = abba`, check if `str2` is in `str1`.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str1, str2;
  cout << "Enter first string: ";
  cin >> str1;
  cout << "Enter second string: ";
  cin >> str2;

  cout << str2 << " is in " << str1 << " is ";
  cout << boolalpha << (str1.find(str2) != string::npos) << endl;

  return 0;
}
```

<details>
<summary>Time and space complexities</summary>

Time Complexity: $O(n)$ [since find function searches linearly]

Space Complexity: $O(1)$

</details>

<details>
<summary>Output</summary>

```plaintext
OUTPUT:
  Enter first string: babbar
  Enter second string: abba
  abba is in babbar is true

OUTPUT:
  Enter first string: apple
  Enter second string: mango
  mango is in apple is false
```

</details>
