#include <stdio.h>

int main() {
    int num, shift_amount, result;

    // User input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Enter shift amount (1-31): ");
    scanf("%d", &shift_amount);

    printf("\nnum = %d (Binary: %08b)\n", num, num);

    // Left Shift (<<)
    result = num << shift_amount;
    printf("%d << %d = %d (Binary: %08b)\n", num, shift_amount, result, result);

    // Right Shift (>>)
    result = num >> shift_amount;
    printf("%d >> %d = %d (Binary: %08b)\n", num, shift_amount, result, result);

    return 0;
}
