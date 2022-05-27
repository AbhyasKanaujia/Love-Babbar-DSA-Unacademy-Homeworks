# 06 Move Negative to One Size

{% embed url="https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1" %}
GeeksForGeeks Question
{% endembed %}

<details>

<summary>Without Preserving Relative Order</summary>

```cpp
void segregateElements(int arr[],int n)
{
    int p1 = 0, p2 = n - 1;
    while(p1 < p2) {
        if(arr[p1] > 0)
            p1++;
        else
            swap(arr[p1], arr[p2--]);
    }
}
```

Time Complexity: $$O(n)$$

Space Complexity: $$O(1)$$​

</details>

<details>

<summary>Preserving Relative Order</summary>

```cpp
void segregateElements(int arr[],int n)
{
    vector<int> positive, negative;
    for(int i = 0; i < n; i++)
        (arr[i] >= 0 ? positive : negative).push_back(arr[i]);
        
    for(int i = 0; i < positive.size(); i++)
        arr[i] = positive[i];
        
    for(int i = 0; i < negative.size(); i++)
        arr[positive.size() + i] = negative[i];
}
```

Time Complexity: $$O(n)$$​

Space Complexity: $$O(n)$$​

</details>
