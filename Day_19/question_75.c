#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c], transpose[c][r];

    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            scanf("%d", &matrix[i][j]);

    // Transposing the matrix
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            transpose[j][i] = matrix[i][j];

    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < r; ++j) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}