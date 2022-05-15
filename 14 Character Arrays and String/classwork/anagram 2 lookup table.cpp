#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string str1, string str2)
{
  if (str1.length() != str2.length())
    return false;

  // table for counting frequency
  int frequency[26] = {0};

  // count characters in first string
  for (char ch : str1)
    frequency[tolower(ch) - 'a']++;

  // cancel out characters in second string
  for (char ch : str2)
    frequency[tolower(ch) - 'a']--;

  // check if all cancelled out and not too many cancelled out
  for (int i = 0; i < 26; i++)
    // if not properly cancelled out
    if (frequency[i] != 0)
      // not anagram
      return false;

  // else is anagram
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