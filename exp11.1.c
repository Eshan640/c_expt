#include <stdio.h>

int main() {
    int a, b, result;

    // User input
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\na = %d (Binary: %08b)\n", a, a);
    printf("b = %d (Binary: %08b)\n\n", b, b);

    // Bitwise AND (&)
    result = a & b;
    printf("a & b = %d (Binary: %08b)\n", result, result);

    // Bitwise OR (|)
    result = a | b;
    printf("a | b = %d (Binary: %08b)\n", result, result);

    // Bitwise NOT (~)
    result = ~a;
    printf("~a   = %d (Binary: %08b)\n", result, result);
    result = ~b;
    printf("~b   = %d (Binary: %08b)\n", result, result);

    return 0;
}
