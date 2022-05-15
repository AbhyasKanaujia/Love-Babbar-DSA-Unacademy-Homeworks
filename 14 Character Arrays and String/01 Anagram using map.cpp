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