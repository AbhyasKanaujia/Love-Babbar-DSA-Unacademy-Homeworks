#include <bits/stdc++.h>
using namespace std;

vector<string> oToB = {
    "000",
    "001",
    "010",
    "011",
    "100",
    "101",
    "110",
    "111"};

int main()
{
  string octal;
  string bin = "";
  cout << "Enter Octal: ";
  cin >> octal;

  for (char x : octal)
    bin += oToB[x - '0'];

  cout << octal << " => " << bin << endl;
  return 0;
}