#include <stdio.h>

int main() {
    // if-else statements
    int num = 10;

    if (num > 0) {
        printf("%d is positive.\n", num);
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("%d is zero.\n", num);
    }

    // switch-case statements
    char grade = 'B';

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good!\n");
            break;
        case 'C':
            printf("Average.\n");
            break;
        case 'D':
            printf("Not so good.\n");
            break;
        case 'F':
            printf("Failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    // for loop
    for (int i = 1; i <= 5; i++) {
        printf("For loop iteration %d\n", i);
    }

    // while loop
    int whileCounter = 1;
    while (whileCounter <= 5) {
        printf("While loop iteration %d\n", whileCounter);
        whileCounter++;
    }

    // do-while loop
    int doWhileCounter = 1;
    do {
        printf("Do-While loop iteration %d\n", doWhileCounter);
        doWhileCounter++;
    } while (doWhileCounter <= 5);

    // break and continue statements
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Breaking out of the loop at iteration %d\n", i);
            break;
        }
        if (i % 2 == 0) {
            printf("Skipping even iteration %d\n", i);
            continue;
        }
        printf("Iteration %d\n", i);
    }

    return 0;
}
