# Memory Leaks

#### What is Memory Leak?

Memory leaks occur when we allocate memory using `new` but forget to deallocate it before the pointer to this memory goes out of scope.&#x20;

#### How does it occur?

Sometime we might remember to deallocate the memory but **use the wrong delete syntax.**&#x20;

```cpp
int *p1 = new int;
delete []p1;


int *p2 = new int[10];
delete p2;
```

This does not throw an error. But leaves both the variable and the array undeleted.&#x20;

Arrays should use `delete []` and varibales should use `delete`

#### What are the risks?

* Decrease the performance
* In worst case, no more space is left; program/system crashes
* More at risk: Video games, small embedded devices, device drivers, programs allocating and deallocating too frequently

<details>

<summary><code>References</code></summary>

* **Memory leak - Wikipedia. (2007). Retrieved 24 May 2022, from https://en.wikipedia.org/wiki/Memory\_leak**
* **Memory leak in C++ and How to avoid it?. (2019). Retrieved 24 May 2022, from https://iq.opengenus.org/memory-leak-in-cpp-and-how-to-avoid-it/**

</details>
