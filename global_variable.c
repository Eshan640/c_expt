#include <stdio.h>

// Declare a global variable
int sum = 0;
int calculate_sum(int a, int b) {
    sum = a + b;     // Store result in global variable
    return sum;      // Also return the sum
}

// Function to return the global sum variable
int get_sum() {
    return sum;
}

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = calculate_sum(num1, num2);   // Returns the sum and updates global variable

    printf("Sum calculated (returned): %d\n", result);
    printf("Sum stored in global variable: %d\n", get_sum());

    return 0;
}
