# Homework of Programming Basics II

Click on question to expand.

<details>
<summary><h2 style='display: inline'>1. Difference between <code>if</code> and <code>switch</code></h2></summary>

The `if` statement has a condition part that can:

1. Take any integer or boolean value
2. If integer is non zero or boolean is true
   1. Execute the true block
3. else
   1. Execute the false block

The `switch` statement can take an expression that evaluates to an integer or enumeration.

1. It matches the value of the expression with cases
2. When match is found
3. the lines after that case is executed.

The `if` statement can take any kind of boolean expression while the switch statement can only take integer expressions that maps for equality.

</details>

<details>
<summary><h2 style='display: inline'>2. Which values are allowed in <code>switch</code> statement?</h2></summary>

Switch case expression can only be an **integer** or an **enumeration**.

</details>

<details>
<summary><h2 style='display: inline'>3. Print your name <code>N</code> times</h2></summary>

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string name;
  int N;

  cout << "Enter you name: ";
  cin >> name;
  cout << "Enter N: ";
  cin >> n;

  for (int i = 0; i < N; i++)
    cout << name << ' ';

  return 0;
}
```

</details>

<details>
<summary><h2 style='display: inline'>4. Sum of <code>n</code> integers using loop</h2></summary>

```paintext
Input: n
Result = 1 + 2 + 3 + ... + n
Output: result
```

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "n: ";
  cin >> n;

  int res = 0;
  for (int i = 1; i <= n; i++)
    res += i;

  cout << res;
  return 0;
}
```

</details>

<details>
<summary><h2 style='display: inline'>5. What if condition is missing in a loop?</h2></summary>

**While Loop**: If condition is missing in while loop then the compiler will throw an **error** as it **expects** an **expression** inside the parenthesis of the while loop.

```cpp
// Compiler Error: Missing expression before ')'
while()
{
  // code
}
```

**For Loop**: If condition is missing in the for loop then it turns into an infinite loop. The presence of `;;` inside the for loop satisfies the compiler to not make it throw an error.

```cpp
// Infinite Loop
for(;;)
{
  // code
}
```

</details>

<details>
<summary><h2 style='display: inline'>6. Create a calculator using <code>if</code>, <code>else</code>, <code>while</code> and <code>switch</code></h2></summary>

```cpp
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
        cin >>
         a >> b;
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

```

</details>

<details>
<summary><h2 style='display: inline'>7. Explain <code>do while</code> loop</h2></summary>

The `do while` loop is a variation of the `while` loop with the difference that the loop is executed at least once even when the condition is false.

Syntax:

```cpp
do
{
  // code
} while (condition);
```

Note: There is a semi-colon at the end of the loop unlike other looping constructs.

</details>

<details>
<summary><h2 style='display: inline';>8. Pre-increment & post-increment MCQ</h2></summary>

### pre/post Question 1

```cpp
int x = 4, y, z;
y = --x;
z = x--;
printf("%d, %d, %d\n", x, y, z)
```

<details>
<summary>Solution</summary>

```plaintext
x = 4;
y = --x; => y = 3 & x = 3;
z = x--; => z = 3 & x = 2;

OUTPUT:
  2, 3, 3
```

</details>

### pre/post Question 2

```cpp
int a = 1, b = 3;
b = a++ + a++ + a++ + a++ + a++;
printf("a = %d \nb = %d", a, b);

```

<details>

<summary>Solution</summary>

```plaintext
a = 1, b = 3;
b = a++(1) + a++(2) + a++(3) + a++(4) + a++(5); => b = 15 & a = 6

OUTPUT:
  a = 6
  b = 15
```

</details>

### pre/post Question 3

```cpp
int a = 9, b = 9;
a = b++;
b = a++;
b = ++b;

printf("%d %d", a, b);
```

<details>
<summary>Solution</summary>

```plaintext
a = 9, b = 9;
a = b++(9); => a = 9 & b = 10;
b = a++(9); => b = 9 & a = 10;
b = ++b(10); => b = 10;

OUTPUT:
  10 10
```

</details>

### pre/post Question 4

```cpp
int a, b;
b = 10;
a = ++b + ++b;
printf("%d %d", a, b);
```

<details>
<summary>Solution</summary>

```plaintext
b = 10;
a = ++b(11) + ++b(12); => a = 23 & b = 12


OUTPUT:
  23 12
```

</details>

</details>

<details>
<summary><h2 style='display: inline';>9. <code>break</code> and <code>continue</code> MCQ</h2></summary>

### break/continue Question 1

```cpp
int a = 0, i = 0, b;
for (i = 0;i < 5; i++)
{
    a++;
    continue;
}

printf("%d", a);
```

<details>
<summary>Solution</summary>

There is no statement after `continue`. So its presence makes no difference. It would work just like a normal `for` loop.

The value of `a` and `i` changes similarly.

`a` value after the loop is its value at the last iteration i.e. when `i = 4`; loop breaks at `i = 5`. In the last iteration `a = 4`.

```plaintext
OUTPUT:
  5
```

</details>

### break/continue Question 2

```cpp
int a = 0, i = 0, b;
for (i = 0;i < 5; i++)
{
  a++;
  if (i == 3)
    break;
}
```

<details>
<summary>Solution</summary>

The `for` loop runs until `i` is 3; after that it breaks out of the loop.

```plaintext

```

</details>

### break/continue Question 3

```cpp
int i = 0, j = 0;
for (i = 0;i < 5; i++)
{
  for (j = 0;j < 4; j++)
    if (i > 1)
      break;
  printf("Hi \n");
}
```

<details>
<summary>Solution</summary>

The `i` loop runs for i in {0, 1, 2, 3, 4}. The `j` loops runs for j in {0, 1, 2, 3}. The loop doesn't impact how many times hi is printed.

The `break` statement only breaks the `j` loop which does not stops the `i` loop from printing "Hi".

So "Hi" is printed as many times as `i` loop runs; 5 times.

```plaintext
OUTPUT:
  Hi
  Hi
  Hi
  Hi
  Hi
```

</details>

### break/continue Question 4

```cpp
int i = 0;
for (i = 0;i < 5; i++)
  if (i < 4)
  {
    printf("Hello");
    break;
  }
```

<details>
<summary>Solution</summary>

The `i` loop runs for i in {0, 1, 2, 3, 4}.

As soon as the `if` statement is `true`. It prints "Hello" and breaks out of the `i` loop.

The `if` statement is `true` in the first iteration i.e. `i = 0`.

So "Hello" is printed only once.

```plaintext
OUTPUT:
  Hello
```

</details>

</details>

<details>
<summary><h2 style='display: inline';>10. Variable Scoping MCQ</h2></summary>

### Variable Scoping Question 1

```cpp
int i;
for (i = 0;i < 5; i++)
  int a = i;
printf("%d", a);
```

<details>
<summary>Solution</summary>

Variable `a` is declared inside the `for` loop and is not accessible outside the loop.

The code snipped throws an error.

</details>

### Variable Scoping Question 2

Which variable has the longest scope?

```cpp
#include <stdio.h>
int b;
int main()
{
  int c;
  return 0;
}
int a;
```

<details>
<summary>Solution</summary>

`b`. It was declared at the beginning of the program and is valid till the end. `c` only lives inside `main` and `a` is declared at the very end.

So, **`b`** has the longest scope.

</details>

### Variable Scoping Question 3

```cpp
#include <stdio.h> //Program 1
int main()
{
  int a;
  int b;
  int c;
}

#include <stdio.h> //Program 2
int main()
{
  int a;
  {
    int b;
  }
  {
    int c;
  }
}

```

<input type='radio' id='option10.3.1' disabled='true'>
<label for='option10.3.1'>Both are same</label>

<input type='radio' id='option10.3.2' disabled='true'>
<label for='option10.3.2'>Scope of c is till the end of the main function in Program 2</label>

<input type='radio' id='option10.3.3' disabled='true'>
<label for='option10.3.3'>In Program 1, variables a, b and c can be used anywhere in the main function whereas in Program 2, variables b and c can be used only inside their respective blocks</label>

<input type='radio' id='option10.3.4' disabled='true'>
<label for='option10.3.4'>None of the mentioned</label>

<details>
<summary>Solution</summary>

Option C is correct.

</details>
</details>

<details>
<summary><h2 style='display: inline';>11. Binary to Decimal</h2></summary>

```cpp
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
```

</details>

<details>
<summary><h2 style='display: inline';>12. Octal to Binary</h2></summary>

```cpp
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
```

</details>
