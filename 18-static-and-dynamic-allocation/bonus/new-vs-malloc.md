# new vs malloc



| new                                                                                                      | malloc                                                                                                       |
| -------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------ |
| `new` calls the constructor after allocating space. Smart.                                               | `malloc` only allocates enough space and its our job to call the constructor to initialize the object.       |
| `new` is an operator like `+` `sizeof` etc. So this will get compiled down to a small fragment of code.  | Its a library function. This will be an overhead and will make the size of the executable relatively larger. |
| Returns appropriate pointer.                                                                             | Always returns `void *`                                                                                      |
| On error it throws an `bad_alloc` exception. So error handling comes naturally.                          | On error simply returns `NULL`. So its our job to perform NULL checking and throw appropriate exceptions.    |
| Size requirement is calculated by compiler.                                                              | Size requirement are to be specified explicitely.                                                            |
| Cannot be resized.                                                                                       | Can be resized using `realloc()`.                                                                            |

<details>

<summary>References</summary>

* **new operator (C++). (2022). Retrieved 24 May 2022, from https://docs.microsoft.com/en-us/cpp/cpp/new-operator-cpp?view=msvc-17**
* **malloc() vs new - GeeksforGeeks. (2010). Retrieved 24 May 2022, from https://www.geeksforgeeks.org/malloc-vs-new/**

</details>
