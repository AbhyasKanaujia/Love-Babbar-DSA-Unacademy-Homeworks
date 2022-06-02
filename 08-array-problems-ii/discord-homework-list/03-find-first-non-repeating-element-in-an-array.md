# 03 Find First non repeating element in an Array

{% embed url="https://practice.geeksforgeeks.org/problems/non-repeating-element3958/1/" %}

```cpp
int firstNonRepeating(int arr[], int n) 
{ 
    map<int, int> frequency;
    
    for(int i = 0; i < n; i++)
        frequency[arr[i]]++;
        
    for(int i = 0; i < n; i++)
        if(frequency[arr[i]] == 1)
            return arr[i];
            
    return -1;
} 
```
