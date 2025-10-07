#include <stdio.h>

// Recursive function for GCD 
int GCD(int num1, int num2) {
    if (num2 == 0)
        return num1;
    else
        return GCD(num2, num1 % num2);
}

int main() {
    int a, b, result;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    result = GCD(a, b);

    printf("The GCD of %d and %d is %d\n", a, b, result);

    return 0;
}