# 09 Majority Element (Moore’s Voting Algorithm)

{% embed url="https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1/" %}

### Using map

```cpp
int majorityElement(int a[], int size){
    map<int, int> freq; 
    
    for(int i = 0; i < size; i++) 
        freq[a[i]]++;
        
    for(auto &p: freq)
        if(p.second > size / 2)
            return p.first;
            
    return -1;
}
```

### Moore’s Voting Algorithm

```cpp
{
    
    int majority = 0, count = 1;
    
    for(int i = 1; i < size; i++) {
        count += (a[majority] == a[i]) ? 1 : -1;
        
        if(count == 0) {
            majority = i;
            count = 1;
        }
    }
    
    count = 0;
    
    for(int i = 0; i < size; i++) 
        count += (a[i] == a[majority]);
        
    if(count > size / 2)
        return a[majority];
    else
        return -1;
}
```
