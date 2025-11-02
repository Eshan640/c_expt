#include <stdio.h>
int main() {
    int i;float f; char c;

// Get input from user
    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Enter a character: ");
    scanf(" %c", &c);

    int *iptr = &i; float *fptr = &f; char *cptr = &c;
    printf("\nInitial addresses and values:\n");
    printf("Integer: Address = %p, Value = %d\n", (void*)iptr, *iptr);
    printf("Float: Address = %p, Value = %f\n", (void*)fptr, *fptr);
    printf("Char: Address = %p, Value = %c\n", (void*)cptr, *cptr);
    
    // Increment pointers
    iptr++; fptr++; cptr++;

    printf("\nAfter incrementing pointers:\n");
    printf("Integer pointer: Address = %p\n", (void*)iptr);
    printf("Float pointer: Address = %p\n", (void*)fptr);
    printf("Char pointer: Address = %p\n", (void*)cptr);
    // Decrement pointers
    iptr--; fptr--;cptr--;
    printf("\nAfter decrementing pointers back:\n");
    printf("Integer pointer: Address = %p, Value = %d\n", (void*)iptr, *iptr);
    printf("Float pointer: Address = %p, Value = %f\n", (void*)fptr, *fptr);
    printf("Char pointer: Address = %p, Value = %c\n", (void*)cptr, *cptr);

    return 0;
}