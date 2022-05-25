# 05 Segmened Sieve

{% embed url="https://practice.geeksforgeeks.org/problems/product-of-primes5328/1/" %}
Geeks For Geeks question that uses Segmented Sieve
{% endembed %}

<details>

<summary>Solution</summary>

```cpp
typedef long long ll;
ll m = 1000000007;
vector<ll> generatePrimes(ll N) {
    vector<ll> primes;
    vector<ll> isPrime(N + 1, true);
    for(ll i = 2; i <= N; i++) 
        if(isPrime[i]) {
            primes.push_back(i);
            for(ll j = i * i; j <= N; j += i)
                isPrime[j] = false;
        }
        
    return primes;
}



long long primeProduct(long long L, long long R){
    vector<long long> primes = generatePrimes(sqrt(R));
    
    vector<bool> dummy(R - L + 1, true);
    
    for(ll prime: primes) {
        ll firstMultiple = ceil((double) L / prime) * prime;
        
        for(ll j = max(firstMultiple, prime * prime); j <= R; j += prime)
            dummy[j - L] = false;
    }
    
    ll product = 1;
    for(ll i = L; i <= R; i++)
        if(dummy[i - L])
            product = (product * i) % m; 
            
    return product % m;
}
```

</details>

![1/4](<../../.gitbook/assets/DocScanner 25-May-2022 7-29 pm\_1.jpg>)

![2/4](<../../.gitbook/assets/DocScanner 25-May-2022 7-29 pm\_2.jpg>)

![3/4](<../../.gitbook/assets/DocScanner 25-May-2022 7-29 pm\_3.jpg>)

![4/4](<../../.gitbook/assets/DocScanner 25-May-2022 7-29 pm\_4.jpg>)
