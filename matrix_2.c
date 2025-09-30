#include <stdio.h>

int main() {
    int m, n, p, q;
    printf("Enter dimensions of matrix A (m n): ");
    scanf("%d %d", &m, &n);

    int A[m][n];
    printf("Enter elements of matrix A (row-wise):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter dimensions of matrix B (p q): ");
    scanf("%d %d", &p, &q);

    int B[p][q];
    printf("Enter elements of matrix B (row-wise):\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Check matrix multiplication compatibility
    if (n != p) {
        printf("Matrix multiplication not possible. Columns of A (%d) must equal rows of B (%d).\n", n, p);
        return 0;
    }

    int C[m][q];

    // Initialize resultant matrix with zeros
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Compute product A * B = C
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print matrix A
    printf("Matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // Print matrix B
    printf("Matrix B (%d x %d):\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // Print resultant matrix C
    printf("Product matrix C = A * B (%d x %d):\n", m, q);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
