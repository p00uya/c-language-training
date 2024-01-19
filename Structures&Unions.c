#include <stdio.h>

// Structure declaration
struct Point {
    int x;
    int y;
};

// Nested structure declaration
struct Rectangle {
    struct Point topLeft;
    struct Point bottomRight;
};

// Union declaration
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // Structure initialization
    struct Point p1 = {10, 20};
    printf("Point coordinates: (%d, %d)\n", p1.x, p1.y);

    // Nested structure initialization
    struct Rectangle rect = {{5, 10}, {15, 25}};
    printf("Top-left coordinates: (%d, %d)\n", rect.topLeft.x, rect.topLeft.y);
    printf("Bottom-right coordinates: (%d, %d)\n", rect.bottomRight.x, rect.bottomRight.y);

    // Union usage
    union Data myUnion;

    myUnion.i = 10;
    printf("Value of i in the union: %d\n", myUnion.i);

    myUnion.f = 3.14;
    printf("Value of f in the union: %f\n", myUnion.f);

    // Differences between structures and unions
    struct {
        int x;
        char c;
    } structExample;

    union {
        int x;
        char c;
    } unionExample;

    printf("Size of structure: %lu bytes\n", sizeof(structExample));
    printf("Size of union: %lu bytes\n", sizeof(unionExample));

    structExample.x = 65;
    structExample.c = 'A';
    printf("Structure values: x = %d, c = %c\n", structExample.x, structExample.c);

    unionExample.x = 65;
    unionExample.c = 'A';
    printf("Union values: x = %d, c = %c\n", unionExample.x, unionExample.c);

    return 0;
}
