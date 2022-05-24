# 03 Dynamic Allocation of 2D Array

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()  {
    int row, col;
    cin >> row >> col;
    
    // dynamic allocaiton for rows
    int **arr = new int*[row];

    // dynamic allocation of columns in each row
    for(int i = 0; i < row; i++)
        arr[i] = new int[col];
    
    // assign value to 2D array
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            cin >> arr[i][j];
    
    // use 2D array
    cout << "Values in array:\n ";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
    
    // deallocate each row individually
    for(int i = 0; i < row; i++)
        delete []arr[i];
        
    // deallocate array of rows
    delete []arr;
    
    return 0;
}
```
