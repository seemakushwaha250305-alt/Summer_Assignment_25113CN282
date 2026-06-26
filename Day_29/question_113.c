#include <stdio.h>

int main() {
    int choice;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Result = %.2f\n", a + b);
            break;
        case 2:
            printf("Result = %.2f\n", a - b);
            break;
        case 3:
            printf("Result = %.2f\n", a * b);
            break;
        case 4:
            if(b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero is not possible.\n");
            break;
        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}