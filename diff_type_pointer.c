#include <stdio.h>

int main() {
    int i;
    float f;
    char c;

    // Take input from user for variables
    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Enter a character: ");
    scanf(" %c", &c);

    // Declare pointers and initialize with addresses
    int *iptr = &i;
    float *fptr = &f;
    char *cptr = &c;

   // Print values of pointers and variables they point to
    printf("\nPointer values (addresses):\n");
    printf("int pointer points to address: %p\n", (void*)iptr);
    printf("float pointer points to address: %p\n", (void*)fptr);
    printf("char pointer points to address: %p\n", (void*)cptr);

    printf("\nValues of variables through pointers:\n");
    printf("Value pointed by int pointer: %d\n", *iptr);
    printf("Value pointed by float pointer: %f\n", *fptr);
    printf("Value pointed by char pointer: %c\n", *cptr);

    printf("\nOriginal variable values:\n");
    printf("Integer: %d\n", i);
    printf("Float: %f\n", f);
    printf("Character: %c\n", c);

    return 0;
}