# 01 Coin Change

{% embed url="https://leetcode.com/problems/coin-change/submissions/" %}

<details>

<summary>TLE Solution discuessed in class</summary>

```cpp
int res = INT_MAX;

void dfs(vector<int> &coins, int amount, int currentCoin = 0, int step = 0) {
    if(amount == 0)    
        res = min(res, step);
    else if(amount > 0) 
        for(int i = currentCoin; i < coins.size(); i++) 
            dfs(coins, amount - coins[i], i, step + 1);
}

int coinChange(vector<int>& coins, int amount) {
    dfs(coins, amount);
    return (res == INT_MAX ? -1 : res);
}
```

</details>
