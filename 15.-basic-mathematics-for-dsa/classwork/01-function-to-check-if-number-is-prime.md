# 01 Function to check if number is prime

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<bool> isPrime(n + 1, true);
    
    for(int i = 2; i <= n; i++)
        if(isPrime[i])
            for(int j = i * 2; j <= n; j += i)
                isPrime[j] = false;
                
    cout << n << " is prime is " << boolalpha << isPrime[n];

    return 0;
}
```
