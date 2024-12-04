#include <stdio.h>

void swap(int *a, int *b) // NOTE: Here we get the address of x and y. int *x means a pointer that stores the address of x
{
    int temp;
    temp = *a; // This is how we dereference the pointer, which means we are getting the value of the address it points to
               // (a pointer is a variable that stores the address of another variable)
               // In our case, a is a pointer that stores the address of x (*a is the value of the address it points to)
    *a = *b;   // Now we are changing the value of a by changing the value of the address it points to
    *b = temp; // Now we are changing the value of b by changing the value of the address it points to

    // Check the type of a and b
    // printf("Type of a: %s\n", typeid(a).name());
    // printf("Type of b: %s\n", typeid(b).name());
    printf("Type of a: int *\n");
    printf("Type of b: int *\n");
}

int main()
{
    int x = 5, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y); // This is how we pass the address of x and y
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}