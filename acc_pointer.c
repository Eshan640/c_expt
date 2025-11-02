#include <stdio.h>

// Function to modify values via pointers
void modifyValues(int *a, int *b) {
    *a = *a + 10;   // increment value pointed by a
    *b = *b * 2;    // double value pointed by b
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);  // take input from user

    printf("Before: x = %d, y = %d\n", x, y);
    
    modifyValues(&x, &y); // pass addresses of x, y
    
    printf("After: x = %d, y = %d\n", x, y);
    return 0;
}