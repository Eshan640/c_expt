#include <stdio.h>

int main() {
    int n;

    // Read the number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least two integers to find the second largest.\n");
        return 1;
    }

    int arr[n];

    // Read the integers into the array
    printf("Enter the integers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    // Initialize largest and second largest, then find them
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Handle case where all elements are equal
    if (largest == secondLargest) {
        printf("There is no second largest element (all elements may be equal).\n");
    } else {
        printf("The second largest integer is: %d\n", secondLargest);
    }

    return 0;
}
