#include <stdio.h>

// Preprocessor constants defined here
#define PI 3.14159
#define MAX_SIZE 100
#define TRUE 1
#define FALSE 0
#define STUDENT_ID 640

int main() {
    printf("Value of PI: %.5f\n", PI);
    printf("Maximum array size: %d\n", MAX_SIZE);
    printf("TRUE = %d, FALSE = %d\n", TRUE, FALSE);
    printf("Student ID: %d\n", STUDENT_ID);

    // Try to change constant (will show preprocessor replacement)
    // PI = 3.14;  // This won't work - preprocessor already replaced it!

    printf("\nConstants used in calculation:\n");
    int area = PI * 5 * 5;
    printf("Area of circle (radius 5): %d\n", area);

    return 0;
}