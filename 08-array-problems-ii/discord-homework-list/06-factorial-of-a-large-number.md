# 06 Factorial of a Large Number

{% embed url="https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1/" %}

<details>

<summary>Question</summary>

Given an integer N, find its factorial.\
\
**Example 1:**

```
Input: N = 5
Output: 120
Explanation : 5! = 1*2*3*4*5 = 120
```

**Example 2:**

```
Input: N = 10
Output: 3628800
Explanation :
10! = 1*2*3*4*5*6*7*8*9*10 = 3628800
```

**Expected Time Complexity**: $$O(N^2)$$****

**Expected Auxilliary Space**: $$O(1)$$​

**Constraints**: $$1 ≤ N ≤ 1000$$

</details>

### Using Vector for Large Number

<details>

<summary>Logic</summary>

1. Factorial of larger numbers are unmanageable by any primitive data types.
2. Use a vector to represent a number
3. Perform multiplication just like how we used to do in school by hand
4. To multiply vector `v` with integer `x`&#x20;
   1. Multiply each digit of `v` by `x`
   2. Update `carry`
   3. Replace each digit of `v`

</details>

<details>

<summary>Code</summary>

```cpp
void multiply(vector<int> &res, int x) {
    long long product, carry = 0;
    for(int i = 0; i < res.size(); i++) {
        product = res[i] * x + carry;
        res[i] = product % 10;
        carry = product / 10;
    }
    
    while(carry) {
        res.push_back(carry % 10);
        carry /= 10;
    }
}

vector<int> factorial(int N){
    vector<int> res = {1};
    for(int i = 1; i <= N; i++)
        multiply(res, i);
        
    reverse(res.begin(), res.end());
    
    return res;
}
```

</details>

<details>

<summary>Complexity</summary>

Time Complexity: $$O(n)$$​

Space Complexity: $$O(n)$$​

</details>
