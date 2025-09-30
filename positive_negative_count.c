#include <stdio.h>

int main() {
    int n;

    // Read the number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    // Read the integers into the array
    printf("Enter the integers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int positive = 0, negative = 0, odd = 0, even = 0;

    // Count positives, negatives, odd and even numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        }

        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    // Display the counts
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
