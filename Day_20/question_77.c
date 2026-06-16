#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns for First matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Matrix multiplication constraint check
    if (c1 != r2) {
        printf("Error! Column of first matrix must equal row of second matrix.\n");
        return 0;
    }

    int a[r1][c1], b[r2][c2], prod[r1][c2];

    printf("\nEnter elements of 1st matrix:\n");
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            scanf("%d", &a[i][j]);

    printf("Enter elements of 2nd matrix:\n");
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            scanf("%d", &b[i][j]);

    // Initializing product matrix elements to 0 and calculating product
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            prod[i][j] = 0;
            for (int k = 0; k < c1; ++k) {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nProduct Matrix:\n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}