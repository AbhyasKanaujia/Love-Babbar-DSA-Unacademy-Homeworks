#include <bits/stdc++.h>
using namespace std;

int main()
{
  string bin;
  int decimal = 0;
  cout << "Enter binary: ";
  cin >> bin;

  reverse(bin.begin(), bin.end());

  for (int i = 0; i < bin.length(); i++)
    decimal += (bin[i] - '0') * pow(2, i);

  reverse(bin.begin(), bin.end());

  cout << bin << " => " << decimal << endl;
  return 0;
}