# Macros

A macro is a piece of code that is replace by its value before getting compiled to machine code.&#x20;

Types of macros:

1. Object like macros
2. Chained Macros
3. Multi-line Macros
4. Function-like Macros

#### Object like Macros

Used to replace symbolic names with its value.&#x20;

```cpp
#include <bits/stdc++.h>
#define PI 3.141
using namespace std;

int main() {
    int r;
    cin >> r;
    cout << "Area of circle: " << PI * r * r;
    return 0;
}
```

#### Chained Macros

A macro definition that contains another macro

```cpp
#include <bits/stdc++.h>
#define PI 3.141
#define PIINVERSE (1 / PI)
using namespace std;

int main() {
    cout << "PI inverse is: " << PIINVERSE;
    return 0;
}
```

#### Multi-Line Macro

A macro definiton that spans multiple lines. A `\` is used before ending a line.&#x20;

```cpp
#include <bits/stdc++.h>
#define elements 1,\
                2,\
                3
using namespace std;

int main() {
    vector<int> arr = {elements};
    for(int x: arr) 
        cout << x << ' ';
    return 0;
}
```

#### Funciton-like Macros

Basic single line funcitons can be implemented using  a macro. This will be faster than creating a funciton as there will be no funciton call and save time and space creating entries in the call stack.&#x20;

```cpp
#include <bits/stdc++.h>
#define min(a, b) (a < b ? a : b)

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " is smaller";
    return 0;
}
```

### Advantages of using a Macro

* Reduces code length&#x20;
  * use `#define PB push_back` and `v.PB()`&#x20;
  * `#define sort(v) sort(v.begin(), v.end())` reduces sort to `sort(arr)`
* Avoid _magic number_
  * which are random constants that programs use that only make sense to them
    * Loop runs for 25 times. Why? Is it because alphabets are from 0 - 26? some other reason? Who knows.&#x20;
      * `#define alphabets 25.`better. more explicit.&#x20;
* Faster than varibale as no extra memory is being created. No read time, write time or access time.&#x20;
* Saves spaces.

<details>

<summary>References</summary>

* **Memory leak in C++ and How to avoid it?. (2019). Retrieved 24 May 2022, from https://iq.opengenus.org/memory-leak-in-cpp-and-how-to-avoid-it/**
* **Macros and its types in C/C++ - GeeksforGeeks. (2020). Retrieved 24 May 2022, from https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/**

</details>
