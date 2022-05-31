# 03 Count even length

{% embed url="https://practice.geeksforgeeks.org/problems/count-even-length1907/1/" %}

<details>

<summary>Question</summary>

Given a number n, find the count of all binary sequences of length `2n` such that the sum of the first n bits is the same as the sum of the last `n` bits.\
&#x20;

**Example:**

```
Input: n = 2
Output: 6
Explanation: There are 6 sequences of length 
2*n, the sequences are 0101, 0110, 1010, 1001, 
0000 and 1111.
```

**Example:**

```
Input: n = 1
Output: 2
Explanation: There are 2 sequences of length 
2*n, the sequence are 00 and 11.
```

&#x20;

**Your Task:**\
You don't need to read or print anything. Your task is to complete the function **compute\_value()** which takes n as the input parameter and returns the count of all binary sequences of length `2*n` such that the sum of the first n bits is the same as the sum of the last n bits modulo $$10^9 + 7$$.\
&#x20;

**Expected Time Complexity:** $$O(n \times \log n)$$\
**Expected Space Complexity:**  $$O(1)$$****

**Constraints:**

$$1 \le n \le10^5$$

</details>

### Using DFS

<details>

<summary>Logic</summary>

From the left and the right end, there are 4 possible values that can be inserted:

0 0&#x20;

0 1&#x20;

1 0

&#x20;1 1

After insertion of each of these combinations, the left sum and right sum vary.&#x20;

Try all these 4 combinations and when the required size has been satisfied; check if the left and right sum are equal.&#x20;

If so, count it in else ignore it.&#x20;

</details>

<details>

<summary>Code</summary>

```cpp
int res = 0;
void getCount(int leftSum, int rightSum, int p1, int p2) {
    if(p1 > p2) {
        res += leftSum == rightSum;
        return;
    }
    
    // 0 0
    getCount(leftSum, rightSum, p1 + 1, p2 - 1);
    // 0 1
    getCount(leftSum, rightSum + 1, p1 + 1, p2 - 1);
    // 1 0
    getCount(leftSum + 1, rightSum, p1 + 1, p2 - 1);
    // 1 1
    getCount(leftSum + 1, rightSum + 1, p1 + 1, p2 - 1);
}

int compute_value(int n)
{
    getCount(0, 0, 0, 2 * n - 1);
    return res;
}
```

</details>
