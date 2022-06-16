# Basic

## Prevent iterator from moving forward in `for`  loop.

```cpp
char ch;
    
for(int i = 1; i <= 10; i++){
    cout << "Iteration " << i << endl;
    cout << "repeat iteration (y/n): ";
    cin >> ch;
    if(ch == 'y')
        i--;
}
```

Sometimes you might want to work with the same value of the iterator. Example: See solution for [First Missing Integer](https://www.interviewbit.com/problems/first-missing-integer/)
