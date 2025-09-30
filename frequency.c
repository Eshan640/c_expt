#include <stdio.h>

int main() {
    int n, i, num, freq = 0;

    // Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read the list of integers
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the number to find the frequency of
    printf("Enter the number to find frequency: ");
    scanf("%d", &num);

    // Calculate frequency
    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            freq++;
        }
    }

    // Output the frequency
    printf("Frequency of %d = %d\n", num, freq);

    return 0;
}
