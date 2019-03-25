## Source code
```
#define container_of(ptr, type, member) ({
const typeof( ((type *)0)->member ) *__mptr = (ptr);
(type *)( (char *)__mptr - offsetof(type,member) );})
```

## Explanation

The result is the pointer to the start of the structure. 
Finally, you cast this pointer to the structure type to have a valid variable.

## Example
```
struct numbers {
    int one;
    int two;
    int three;
} n;

int *ptr = &n.two;
struct numbers *n_ptr;
n_ptr = container_of(ptr, struct numbers, two);
```
