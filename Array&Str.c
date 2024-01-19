#include <stdio.h>
#include <string.h>

int main() {
    // Array declaration and initialization
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing elements of the array
    printf("Array Elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // String handling functions
    char source[] = "Hello";
    char destination[20];

    // Copying a string
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);

    // Concatenating strings
    strcat(destination, " World!");
    printf("Concatenated string: %s\n", destination);

    // Finding the length of a string
    int length = strlen(destination);
    printf("Length of the string: %d\n", length);

    // Multi-dimensional array declaration and initialization
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Accessing elements of the multi-dimensional array
    printf("Multi-dimensional Array Elements:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
