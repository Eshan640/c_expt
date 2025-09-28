#include <stdio.h>

int multiply(int x, int y) {
    return x * y;
}

int divide(int a, int b) {
    if (b != 0) return a / b;
    else {
        printf("Division by zero error!\n");
        return 0;
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Block 1: using user inputs
    {
        int mulResult = multiply(num1, num2);
        int divResult = divide(num1, num2);

        printf("\nMultiplication: %d", mulResult);
        printf("\nDivision: %d", divResult);
    }
    // Accessing mulResult or divResult here will cause "variable undefined" error

    // Block 2: using hardcoded values
    {
        int mulResult = multiply(6, 7);
        int divResult = divide(20, 5);

        printf("\n\nMultiplication: %d", mulResult);
        printf("\nDivision: %d", divResult);
    }

    // Block 3: using both user input and hardcoded values
    {
        int mulResult = multiply(num1, 10);
        int divResult = divide(100, num2);

        printf("\n\nMultiplication: %d", mulResult);
        printf("\nDivision: %d", divResult);
    }

    return 0;
}
