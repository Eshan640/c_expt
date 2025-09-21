#include <stdio.h>

int main() {
    int rows = 5;
    int coef, i, j;

    for (i = 0; i < rows; i++) {
        coef = 1;
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            printf("%d ", coef);
        }
        printf("\n");
    }

    return 0;
}
