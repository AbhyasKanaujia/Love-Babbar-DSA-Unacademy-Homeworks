# Linked List

## Edge Cases

| Case                                  | Problem                                 | Handling                            |
| ------------------------------------- | --------------------------------------- | ----------------------------------- |
| Linked List has single or no elements | Accessing `ptr -> next` throws an error | `if(!A \|\| !(A -> next)) reutrn A` |

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

## Get nth Node from Front

Here $$n\in [1, A.length]$$​

```cpp
ListNode *getNode(ListNode *A, int n) {
    while(--n) 
        A = A -> next;
    
    return A;
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

## Reverse a Linked List

```cpp
ListNode *reverseLL(ListNode *ll) {
    ListNode *prev = NULL;
    ListNode *current = ll;
    
    while(current) {
        ListNode *next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    
    return prev;
}
```

## Get the Middle Element of a Linked List

```cpp
ListNode *getMiddle(ListNode *A) {
    ListNode *slow = A, *fast = A;
    while(fast && fast -> next && fast -> next -> next) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}
```

```bash
Odd length: 
    1 2 3 4 5 6 7
          ^
Even Length: 
    1 2 3 4 5 6 7 8
          ^
```

