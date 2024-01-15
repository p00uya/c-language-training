#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    // Hello World program
    printf("Hello World!\n");

    // Comments
    // This is a single-line comment

    /*
    This is a
    multi-line comment
    */

    // Data types (int, float, char, etc.)
    int integerVar = 5;
    float floatVar = 3.14;
    char charVar = 'A';

    // Constants
    const double PI = 3.14159;

    // Arithmetic operators
    int sum = add(3, 4);
    int difference = 7 - 3;
    float product = 2.5 * 6;
    float quotient = 8.0 / 2;

    // Relational operators
    if (integerVar > 0) {
        printf("integerVar is positive\n");
    }

    // Logical operators
    if (integerVar > 0 && floatVar < 4.0) {
        printf("Both conditions are true\n");
    }

    // Bitwise operators
    int bitwiseAnd = 5 & 3;
    int bitwiseOr = 5 | 3;
    int bitwiseXor = 5 ^ 3;
    int bitwiseComplement = ~5;

    printf("Bitwise AND: %d\n", bitwiseAnd);
    printf("Bitwise OR: %d\n", bitwiseOr);
    printf("Bitwise XOR: %d\n", bitwiseXor);
    printf("Bitwise Complement: %d\n", bitwiseComplement);

    return 0;
}
