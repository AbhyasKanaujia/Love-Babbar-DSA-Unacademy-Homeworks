# 02 Euclid's Algorithm for GCD

Eculid's Formla for GCD:

$$
\text{GCD}(a, b) = \left\{
\begin{array}{ll}
      b & \text{when } a = 0 \\
      a & \text{when } b = 0 \\
      GCD(a \% b, b) & \text{when } a > b \\
      GCD(a, b \% a) & \text{when } b > a \\
\end{array} 
\right.
$$

#### Iterative Method&#x20;

```cpp
int GCD(int a, int b) {
  while((a % b) > 0) {
    int temp = a;
    a = b;
    b = temp % b;
  }
  return b;
}
```

#### Recursive Method

```cpp
int gcd(int a, int b) 
{  
    
    // BASE CASE
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a;   
    if (a == b) 
        return a; 
  
    // a is greater 
    if (a > b) 
        return gcd(a % b, b); 
    return gcd(a, b % a); 
}
```

### Question 1

{% embed url="https://leetcode.com/problems/find-greatest-common-divisor-of-array/" %}
LeetCode: Find Greatest Common DIvisor of Array
{% endembed %}

<details>

<summary>Solution</summary>

#### Iterative Solution

```cpp
#define ALL(v) v.begin(), v.end()
class Solution {
public:
    
    int findGCD(vector<int>& nums) {
        int a = *max_element(ALL(nums));
        int b = *min_element(ALL(nums));
        
        while((a % b) > 0) {
            int temp = a;
            a = b;
            b = temp % b;
        }
        
        return b;
    }
};
```

#### Recursive Solution

```cpp
#define ALL(v) v.begin(), v.end()
class Solution {
public:
    inline int gdc(const int &a, const int &b) {
        if(a == 0)
            return b;
        if(b == 0)
            return a;
        if(a == b)
            return a;
        
        if(a > b)
            return gdc(a % b, b);
        return gdc(a, b % a);
    }
    
    int findGCD(vector<int>& nums) {
        return gcd(*min_element(ALL(nums)), *max_element(ALL(nums)));
    }
};
```

</details>



### Question 2

{% embed url="https://leetcode.com/problems/greatest-common-divisor-of-strings/" %}
LeetCode: Greatest Common Divisor of Strings
{% endembed %}

<details>

<summary>Solution</summary>

```cpp
class Solution {
public:
    inline int gcd(const int &a, const int &b) {
        if(a == 0)
            return b;
        if(b == 0)
            return a;
        if(a == b)
            return a;
        
        if(a > b)
            return gcd(a % b, b);
        return gcd(a, b % a);
    }
    
    string gcdOfStrings(string str1, string str2) {
        return ((str1 + str2 == str2 + str1) 
                ? (str1.size() < str2.size() 
                   ? str1 
                   : str2).substr(0, gcd(str1.size(), str2.size())) 
                : "");
    }
};
```

</details>
