- [Can C language return multiple values and if it can - how?](#can-c-language-return-multiple-values-and-if-it-can---how)
  - [1. Using Pointers](#1-using-pointers)
  - [2. Using `struct`](#2-using-struct)
  - [3. Using Arrays](#3-using-arrays)
  - [4. Using Dynamic Memory](#4-using-dynamic-memory)
  - [5. Using Global or Static Variables](#5-using-global-or-static-variables)
  - [Which Method to Use?](#which-method-to-use)


## Can C language return multiple values and if it can - how?

The C language does not support directly returning multiple values from a function as many modern languages do. However, there are several common techniques to achieve the same result:

---

### 1. Using Pointers
You can pass variables as pointers to the function, and the function can modify them directly.

```c
#include <stdio.h>

void getTwoNumbers(int *a, int *b) {
    *a = 10;
    *b = 20;
}

int main() {
    int x, y;
    getTwoNumbers(&x, &y); // Pass the addresses of `x` and `y`
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
```

- **Explanation**: `getTwoNumbers` modifies the values at the memory locations provided by `x` and `y`.

---

### 2. Using `struct`
You can define a `struct` to group multiple values and return it.

```c
#include <stdio.h>

typedef struct {
    int a;
    int b;
} TwoNumbers;

TwoNumbers getTwoNumbers() {
    TwoNumbers result;
    result.a = 10;
    result.b = 20;
    return result;
}

int main() {
    TwoNumbers numbers = getTwoNumbers(); // Function returns a struct
    printf("a = %d, b = %d\n", numbers.a, numbers.b);
    return 0;
}
```

- **Explanation**: A `struct` allows bundling multiple variables together, which the function returns as a single entity.

---

### 3. Using Arrays
Return multiple values via an array.

```c
#include <stdio.h>

void getTwoNumbers(int arr[]) {
    arr[0] = 10;
    arr[1] = 20;
}

int main() {
    int results[2];
    getTwoNumbers(results); // Pass an array to hold results
    printf("a = %d, b = %d\n", results[0], results[1]);
    return 0;
}
```

- **Explanation**: The function populates the passed array with the desired values.

---

### 4. Using Dynamic Memory
Allocate memory dynamically for the results and return a pointer.

```c
#include <stdio.h>
#include <stdlib.h>

int* getTwoNumbers() {
    int *result = malloc(2 * sizeof(int));
    result[0] = 10;
    result[1] = 20;
    return result;
}

int main() {
    int *numbers = getTwoNumbers(); // Dynamically allocated
    printf("a = %d, b = %d\n", numbers[0], numbers[1]);
    free(numbers); // Free the allocated memory
    return 0;
}
```

- **Explanation**: The function allocates memory for the values and returns a pointer to it. You must remember to `free` the memory later.

---

### 5. Using Global or Static Variables
Store the results in global or static variables and access them after the function call.

```c
#include <stdio.h>

int a, b;

void getTwoNumbers() {
    a = 10;
    b = 20;
}

int main() {
    getTwoNumbers();
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
```

- **Explanation**: The function modifies global or static variables directly. However, this approach is less preferred due to potential side effects.

---

### Which Method to Use?
- **Pointers**: Best for modifying existing variables.
- **Structs**: Ideal for returning multiple logically related values.
- **Arrays**: Useful when dealing with homogeneous data.
- **Dynamic Memory**: Use cautiously, ensuring proper memory management.
- **Globals**: Avoid unless absolutely necessary.
