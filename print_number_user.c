#include <stdio.h>

int main() 
{
    int i, j, k, num = 1;
    int rows;

    // Take input from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) 
    {
        // print leading spaces
        for(k = 1; k <= rows - i; k++) 
        {
            printf(" ");
        }
        // print numbers
        for(j = 1; j <= i; j++) 
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
