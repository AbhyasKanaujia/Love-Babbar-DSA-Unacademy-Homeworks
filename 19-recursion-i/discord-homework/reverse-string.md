# Reverse String

{% embed url="https://leetcode.com/problems/reverse-string/" %}

### Using Recursion

```cpp
void reverse(vector<char> &s, int i, int j) {
    if(i >= j)
        return;
    swap(s[i], s[j]);
    reverse(s, i + 1, j - 1);
}

void reverseString(vector<char>& s) {
    reverse(s, 0, s.size() - 1);
}
```

For a string `12345`

Initially, the function takes a pointer to the two extreme ends.&#x20;

For each call, it swaps the chars pointed by the two pointers.&#x20;

Then it increments the smaller pointer, decrements the larger pointer and makes another call.

This keeps repeating until the pointers cross each other.&#x20;
