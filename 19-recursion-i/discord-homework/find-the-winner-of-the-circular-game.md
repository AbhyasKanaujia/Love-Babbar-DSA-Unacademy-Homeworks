# Find the Winner of the Circular Game

{% embed url="https://leetcode.com/problems/find-the-winner-of-the-circular-game/" %}
LeetCode Question: Find the WInner of the Circular Game
{% endembed %}

### Using Queue

```cpp
int findTheWinner(int n, int k) {
    queue<int> players;

    for(int i = 1; i <= n; i++)
        players.push(i);

    while(players.size() > 1) {
        int remove = k;
        while(remove > 1) {
            players.push(players.front());
            players.pop();
            remove--;
        }
        players.pop();
    }

    return players.front();
}
```
