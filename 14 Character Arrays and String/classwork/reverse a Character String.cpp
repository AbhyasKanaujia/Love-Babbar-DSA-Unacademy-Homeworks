#include <bits/stdc++.h>
using namespace std;
#define MAX 100

void reverse(char str[])
{
  int p1 = 0;
  int p2 = strlen(str) - 1;

  while (p1 < p2)
    swap(str[p1++], str[p2--]);
}

int main()
{
  char str[MAX];
  cout << "Enter a string: ";
  cin >> str;

  reverse(str);

  cout << "Reversed: " << str << endl;
  return 0;
}