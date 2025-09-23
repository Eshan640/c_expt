#include <stdio.h>

int main() 
{
    int m, b;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &b);

    int i, j, k, val;

    // We print rows up to m and columns limited up to b or i+1 (row length)
    for(i = 0; i < m; i++) 
    {
        // print leading spaces for left alignment (to keep shape of triangle)
        for(k = 0; k < m - i - 1; k++) 
        {
            printf(" ");
        }

        val = 1; // first number in each row

        for(j = 0; j <= i && j < b; j++) 
        {
            printf("%d ", val);
            val = val * (i - j) / (j + 1); // binomial coefficient
        }
        printf("\n");
    }

    return 0;
}
