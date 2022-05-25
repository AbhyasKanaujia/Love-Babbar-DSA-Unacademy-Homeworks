# 03 Leet Code Count Primes

{% embed url="https://leetcode.com/problems/count-primes/" %}
LeetCode Count Primes Quesiton Link
{% endembed %}

```cpp
int countPrimes(int n) {
    vector<bool> isIndexPrime(n + 1, true);
    int count = 0;

    for(int i = 2; i <= sqrt(n); i++) {
        if(isIndexPrime[i]) {
            int multiplier = 2;
            while(i * multiplier <= n)
                isIndexPrime[i * multiplier++] = false;
        }
    }

    for(int i = 2; i < n; i++)
        if(isIndexPrime[i])
            count++;
    return count;
}
```
