#include <stdio.h>

// User-defined macro functions

// Macro to add two numbers
#define ADD(a, b) ((a) + (b))

// Macro to subtract two numbers
#define SUBTRACT(a, b) ((a) - (b))

// Macro to multiply two numbers
#define MULTIPLY(a, b) ((a) * (b))

// Macro to find maximum of two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Macro to check if a number is even
#define IS_EVEN(n) (((n) % 2) == 0)

int main() {
    int x, y;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nResults using user-defined macros:\n");
    printf("ADD(%d, %d) = %d\n", x, y, ADD(x, y));
    printf("SUBTRACT(%d, %d) = %d\n", x, y, SUBTRACT(x, y));
    printf("MULTIPLY(%d, %d) = %d\n", x, y, MULTIPLY(x, y));
    printf("MAX(%d, %d) = %d\n", x, y, MAX(x, y));
    printf("IS_EVEN(%d) = %d\n", x, IS_EVEN(x));
    printf("IS_EVEN(%d) = %d\n", y, IS_EVEN(y));

    return 0;
}