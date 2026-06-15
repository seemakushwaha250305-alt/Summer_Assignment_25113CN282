#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter size of the square matrix (N x N): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum += matrix[i][j]; // Summing primary diagonal elements
            }
        }
    }

    printf("\nSum of principal diagonal elements = %d\n", sum);
    return 0;
}