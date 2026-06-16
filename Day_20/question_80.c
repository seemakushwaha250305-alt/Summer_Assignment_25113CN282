#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];

    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            scanf("%d", &matrix[i][j]);

    printf("\nRow-wise sum:\n");
    for (int i = 0; i < r; ++i) {
        int rowSum = 0;
        for (int j = 0; j < c; ++j) {
            rowSum += matrix[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }
    return 0;
}