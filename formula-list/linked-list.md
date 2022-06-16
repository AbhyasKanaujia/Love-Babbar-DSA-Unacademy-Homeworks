# Linked List

## Get Length of a Linked List

```cpp
int getLength(ListNode* A) {
    int count = 0;
    while(A) {
        count++;
        A = A -> next;
    }
    return count;
}
```

## Get the Last Node of a Linked List

```cpp
ListNode* getEnd(ListNode *ll) {
    if(!ll) return ll;
    
    while(ll -> next)
        ll = ll -> next;
        
    return ll;
}
```
