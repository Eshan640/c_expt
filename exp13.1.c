#include <stdio.h>

// Fixed arithmetic macro functions
#define ADD(a, b) ((a) + (b))
#define SUBTRACT(a, b) ((a) - (b))
#define MULTIPLY(a, b) ((a) * (b))
#define DIVIDE(a, b) ((b) != 0 ? (a) / (b) : 0)
#define MODULUS(a, b) ((b) != 0 ? (a) % (b) : 0)

// Simple power function instead of recursive macro
int power(int base, int exp) {
    int result = 1;
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int x, y;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\n=== Arithmetic Operations ===\n");
    printf("ADD(%d, %d)     = %d\n", x, y, ADD(x, y));
    printf("SUBTRACT(%d, %d)= %d\n", x, y, SUBTRACT(x, y));
    printf("MULTIPLY(%d, %d) = %d\n", x, y, MULTIPLY(x, y));
    
    if(y != 0) {
        printf("DIVIDE(%d, %d)   = %d\n", x, y, DIVIDE(x, y));
        printf("MODULUS(%d, %d)  = %d\n", x, y, MODULUS(x, y));
    } else {
        printf("Cannot divide by zero!\n");
    }
    
    printf("\nPOWER(%d, 3)     = %d\n", x, power(x, 3));

    return 0;
}