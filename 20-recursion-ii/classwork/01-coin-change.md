# 01 Coin Change

```cpp
#include <bits/stdc++.h>
using namespace std;

int ways = 0;

void getWays(vector<int> &coins, int amount, int currentCoin = 0) {
    if(amount == 0) {
        possiblities.push_back(osf);
        ways++;
    }
        
    if(amount > 0)
        for(int i = currentCoin; i < coins.size(); i++)
            if(amount - coins[i] >= 0)
                getWays(coins, amount - coins[i], i);
}

int main()
{
    vector<int> coins = {1,2,3};
    int amount = 11;
    getWays(coins, amount);
    cout << ways << endl;

    return 0;
}
```

{% embed url="https://onlinegdb.com/nBWzZUBwm" %}
Run online using OnlineGDB
{% endembed %}
