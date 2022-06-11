# Letter Tile Possibilities

### Using set

Use each character, mark as used and push to result until each character has been marked as used.&#x20;

```cpp
set<string> res;
map<int, bool> used;
string output = "";

void getWays(const string &tiles) {
    for(int i = 0; i < tiles.size(); i++) 
        if(!used[i]) {
            output += tiles[i];
            used[i] = true;
            res.insert(output);
            getWays(tiles);
            output.pop_back();    
            used[i] = false;
        }
}


int numTilePossibilities(string tiles) {
    getWays(tiles);
    return res.size();
}
```

Time Complexity: $$O(n\log n)$$​

Space Complexity: $$O(n)$$​
