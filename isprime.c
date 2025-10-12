#include <stdio.h>
#include <math.h>

// Function to check if a number is prime

int ISPRIME(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int lower, upper;
    printf("Enter the lower and upper bounds of the range: ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (int n = lower; n <= upper; n++) {
        if (ISPRIME(n))
            printf("%d ", n);
    }
    printf("\n");
    return 0;
}