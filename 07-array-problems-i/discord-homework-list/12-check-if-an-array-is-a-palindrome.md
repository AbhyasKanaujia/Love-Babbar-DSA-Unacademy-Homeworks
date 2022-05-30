# 12 Check If an Array is a Palindrome

<details>

<summary>Question</summary>

Given an array, the task is to determine whether an array is a palindrome or not.\
**Examples:** \
&#x20;

```
Input: arr[] = {3, 6, 0, 6, 3}
Output: Palindrome

Input: arr[] = {1, 2, 3, 4, 5}
Output: Not Palindrome
```

</details>

### Two Pointer

<details>

<summary>Logic</summary>

1. Use two pointers; One from the beginning and the other from the end until they cross.
   1. See if these values match
      1. if not <mark style="color:red;">return false</mark>
   2. Increment the first pointer and decrement the second pointer
2. <mark style="color:green;">return true</mark>

</details>

<details>

<summary>Code</summary>

```cpp
bool isPalindrome(const vector<int> &arr) {
    int p1 = 0, p2 = arr.size() - 1;
    while(p1 < p2) 
        if(arr[p1++] != arr[p2--])
            return false;
    return true;
}
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n)$$

Space Complexity: $$O(1)$$

</details>
