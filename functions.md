# 🚀 Functions

### String

| Function                      | Remark                                                | Time Complexity |
| ----------------------------- | ----------------------------------------------------- | --------------- |
| `int stoi(string str)`        | Convert Given String to Integer                       | O(n)            |
| `stol()`, `stoll()`, `stod()` | Convert Given string to `long`, `long long`, `double` | O(n)            |
|                               |                                                       |                 |
|                               |                                                       |                 |

### Algorithm

| Function                                               | Remark                                                                                | Time Complexity                     |
| ------------------------------------------------------ | ------------------------------------------------------------------------------------- | ----------------------------------- |
| `void swap(any &a, any &b)`                            | Sawps two variable of any type; both same type. Takes value by reference. Very fast.  | O(1) for non array. O(n) for array. |
| `any &min(any& a, any&b)` also `max()`                 | Returns the minimum of `a` and `b`. If both are equivalent then return `a`.           | O(1)                                |
| `any &min(anya& a, any& b, Compare comp)` also `max()` | Same as normal min but takes a custom comparator funciton.                            | O(1)                                |
| `void sort(it first, it last)`                         | Sorts the elements in the range `[first,last)` into ascending order.                  | O(N \* log N)                       |
| `void sort(it first, it last, Compare comp)`           | Same as normal sort but takes a comparator function.                                  |                                     |
|                                                        |                                                                                       |                                     |

**Comparator Function**: A boolean function that takes two input of same type and reutrn true when the first element is found to be smaller than the second element.&#x20;
