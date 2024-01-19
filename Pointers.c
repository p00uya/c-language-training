#include <stdio.h>
#include <stdlib.h>

int main() {
    // Pointer declaration and initialization
    int num = 42;
    int *ptr;  // Pointer declaration
    ptr = &num;  // Pointer initialization with the address of num

    printf("Value of num: %d\n", num);
    printf("Value pointed by ptr: %d\n", *ptr);

    // Pointer arithmetic
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;  // Pointer to the first element of the array

    printf("Array Elements using Pointer Arithmetic: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));  // Accessing array elements using pointer arithmetic
    }
    printf("\n");

    // Pointers and arrays
    char str[] = "Pointer";
    char *charPtr = str;

    printf("String using Pointer and Arrays: ");
    while (*charPtr != '\0') {
        printf("%c", *charPtr);
        charPtr++;
    }
    printf("\n");

    // Dynamic memory allocation (malloc, calloc, realloc, free)
    int *dynamicArray;

    // Allocate memory for 5 integers
    dynamicArray = (int *)malloc(5 * sizeof(int));

    // Initialize the dynamically allocated array
    for (int i = 0; i < 5; i++) {
        dynamicArray[i] = i * 10;
    }

    // Resize to 10 integers
    dynamicArray = (int *)realloc(dynamicArray, 10 * sizeof(int));

    // Free allocated memory
    free(dynamicArray);

    return 0;
}
