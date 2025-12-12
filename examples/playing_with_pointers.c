#include <stdio.h>

int main(void)
{
    int num = 5;
    int *numbersPointer = &num; // This is a pointer that stores the address of num

    printf("Value via pointer: %d\n", *numbersPointer);    // Dereferencing the pointer to get the value of num
    printf("Address of num: %p\n", (void *)&num);          // Printing the address of num
    printf("Pointer value: %p\n", (void *)numbersPointer); // Printing the pointer value (address of num)

    *numbersPointer = 7; // Changing the value of num via the pointer
    printf("New value of num: %d\n", num);

    return 0;
}
