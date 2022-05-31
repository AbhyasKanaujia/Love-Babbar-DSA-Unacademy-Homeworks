# 02 Combination in a String of Digits

<details>

<summary>Question</summary>



Given an input string of numbers, find all combinations of numbers that can be formed using digits in the same order.\
**Examples:**&#x20;

```
Input : 123 
Output :1 2 3
        1 23
        12 3
        123

Input : 1234
Output :1 2 3 4 
        1 2 34 
        1 23 4 
        1 234 
        12 3 4 
        12 34 
        123 4 
        1234 
```

</details>

<details>

<summary>Logic</summary>

Upon observation, it can be seen that the question is either adding or not adding a space after each digit in various combinations.&#x20;

1. For each iteration of the recursive function
   1. Print it either with a space or without a space

</details>

<details>

<summary>Code</summary>

```cpp
/*
Visit Notebook: https://abhyas-kanaujia.gitbook.io/love-babbar-dsa-unacademy-homework/a
*/

#include <bits/stdc++.h>
using namespace std;

void printCombinations(int n, int i = 0, string combinations = "") {
    string str = to_string(n);
    if(i == str.length()) {
        cout << combinations << endl;
        return;
    }
    
    printCombinations(n, i + 1, combinations + str[i]);
    if(str[i + 1] != '\0')
        printCombinations(n, i + 1, combinations + str[i] + ' ');
    
}
c+
int main()
{
    int n;
    cin >> n;
    printCombinations(n);
    return 0;
}
```

[Run this code online](https://onlinegdb.com/q\_ug26vVR)

</details>
