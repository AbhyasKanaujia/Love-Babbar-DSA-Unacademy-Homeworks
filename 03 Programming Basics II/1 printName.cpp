#include <bits/stdc++.h>
using namespace std;

int main()
{
  string name;
  int n;

  cout << "Enter you name: ";
  cin >> name;
  cout << "Enter n: ";
  cin >> n;

  for (int i = 0; i < n; i++)
    cout << name << ' ';

  return 0;
}