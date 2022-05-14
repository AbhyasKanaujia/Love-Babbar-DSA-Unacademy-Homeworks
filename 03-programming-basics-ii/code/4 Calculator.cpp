#include <bits/stdc++.h>
using namespace std;

void printMenu()
{
  cout << "1. Addition" << endl;
  cout << "2. Subtraction" << endl;
  cout << "3. Multiplication" << endl;
  cout << "4. Division" << endl;
  cout << "0. Exit" << endl;
  cout << "Enter your choice: ";
}

int main()
{
  while (true)
  {
    int a, b;
    int choice;
    printMenu();
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Enter two numbers: ";
      cin >> a >> b;
      cout << a << " + " << b << " = " << a + b << endl;
      break;
    case 2:
      cout << "Enter two numbers: ";
      cin >> a >> b;
      cout << a << " - " << b << " = " << a - b << endl;
      break;
    case 3:
      cout << "Enter two numbers: ";
      cin >> a >> b;
      cout << a << " * " << b << " = " << a * b << endl;
      break;
    case 4:
      cout << "Enter two numbers: ";
      cin >> a >> b;
      if (b == 0)
        cout << "Error: Division by zero" << endl;
      else
        cout << a << " / " << b << " = " << a / b << endl;
      break;
    case 0:
      return 0;
    default:
      cout << "Error: Invalid choice" << endl;
    }
  }
  return 0;
}