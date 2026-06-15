#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns of the matrices: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], diff[r][c];

    printf("\nEnter elements of 1st matrix:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            scanf("%d", &a[i][j]);

    printf("Enter elements of 2nd matrix:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            scanf("%d", &b[i][j]);

    // Subtracting two matrices
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            diff[i][j] = a[i][j] - b[i][j];

    printf("\nResultant Matrix (Subtracted):\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}