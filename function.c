#include <stdio.h>

// Function declaration (prototype)
int add(int a, int b);

// Function definition
int multiply(int x, int y) {
    return x * y;
}

// Function with parameters and return value
float divide(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero.\n");
        return 0; // Return a default value in case of an error
    }
}

// Recursive function
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    // Function call
    int sum = add(3, 4);
    printf("Sum: %d\n", sum);

    // Function call
    int product = multiply(2, 6);
    printf("Product: %d\n", product);

    // Function call with parameters and return value
    float result = divide(8.0, 2.0);
    printf("Division Result: %.2f\n", result);

    // Recursive function call
    int factResult = factorial(5);
    printf("Factorial of 5: %d\n", factResult);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
