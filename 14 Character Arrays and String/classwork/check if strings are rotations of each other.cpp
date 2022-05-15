#include <bits/stdc++.h>
using namespace std;

bool checkRotation(string str1, string str2)
{
  if (str1.length() != str2.length())
    return false;

  string temp = str1 + str1;

  return temp.find(str2) != string::npos;
}

int main()
{
  string str1, str2;
  cout << "Enter first string: ";
  cin >> str1;
  cout << "Enter second string: ";
  cin >> str2;

  cout << str2 << " is rotation of " << str1 << " is ";
  cout << boolalpha << checkRotation(str1, str2) << endl;
  return 0;
}