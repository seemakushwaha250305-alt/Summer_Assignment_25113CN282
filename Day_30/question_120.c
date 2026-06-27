#include <stdio.h>

void display(int roll[], char name[][50], float marks[], int n) {
    int i;

    printf("\n----- Student Details -----\n");

    for(i = 0; i < n; i++) {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %.2f\n", marks[i]);
    }
}

int main() {
    int n, i;
    int roll[100];
    char name[100][50];
    float marks[100];

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    display(roll, name, marks, n);

    return 0;
}