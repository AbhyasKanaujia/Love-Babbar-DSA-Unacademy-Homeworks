# 04 Create jagged array

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()  {
    int row;
    cin >> row;
    
    // dynamic allocaiton for rows
    int **arr = new int*[row];
    int *sizes = new int[row];

    // dynamic allocation of columns in each row
    for(int i = 0; i < row; i++) {
        cout << "Enter Row " << i + 1 << " size: ";
        cin >> sizes[i];
        arr[i] = new int[sizes[i]];
        
        cout << "Enter " << sizes[i] << " values: ";
        // assign value to 2D array
        for(int j = 0; j < sizes[i]; j++)
            cin >> arr[i][j];
    }
    
    
    // use 2D array
    cout << "Values in array:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < sizes[i]; j++)
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

Output:

```
10
Enter Row 1 size: 9
Enter 9 values: 1 2 3 4 5 6 7 8 9
Enter Row 2 size: 6
Enter 6 values: 6 5 4 3 2 1
Enter Row 3 size: 3
Enter 3 values: 1 2 3
Enter Row 4 size: 5
Enter 5 values: 5 4 3 2 1
Enter Row 5 size: 8
Enter 8 values: 1 2 3 4 5 6 7 8
Enter Row 6 size: 7
Enter 7 values: 7 6 5 4 3 2 1
Enter Row 7 size: 8
Enter 8 values: 7 8 9 4 5 6 1 2
Enter Row 8 size: 7
Enter 7 values: 9 6 3 2 5 8 7
Enter Row 9 size: 7
Enter 7 values: 1 2 3 4 5 67 7
Enter Row 10 size: 7
Enter 7 values: 1 1 1 1 1 1 1
Values in array:
1 2 3 4 5 6 7 8 9 
6 5 4 3 2 1 
1 2 3 
5 4 3 2 1 
1 2 3 4 5 6 7 8 
7 6 5 4 3 2 1 
7 8 9 4 5 6 1 2 
9 6 3 2 5 8 7 
1 2 3 4 5 67 7 
1 1 1 1 1 1 1 
```
