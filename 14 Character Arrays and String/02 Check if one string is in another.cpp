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