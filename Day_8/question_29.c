#include<stdio.h>
//Print half pyramid pattern
void printHalfPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
int main() {
    int rows;
    printf("Enter the number of rows for the half pyramid:");
    scanf("%d", &rows);
    printHalfPyramid(rows);
    return 0;
}
