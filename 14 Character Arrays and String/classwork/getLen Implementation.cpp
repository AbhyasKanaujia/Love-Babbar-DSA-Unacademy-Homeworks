#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int getLen(char str[])
{
  for (int i = 0; i < MAX; i++)
    if (str[i] == '\0')
      return i;
  return -1;
}

int main()
{
  char str[MAX];
  cout << "Enter a string: ";
  cin >> str;
  cout << "The length of the string is: " << getLen(str) << endl;
}