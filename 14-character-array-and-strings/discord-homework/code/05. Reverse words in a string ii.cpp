#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "the sky is blue";

  // reverse the whole string
  reverse(str.begin(), str.end());

  // revere each word
  int i = 0;
  for (int j = 1; j < str.length(); j++)
    if (str[j] == ' ')
    {

      reverse(str.begin() + i, str.begin() + j);
      i = j + 1;
    }

  // reverse the last word
  reverse(str.begin() + i, str.begin() + str.length());

  cout << str << endl;
}