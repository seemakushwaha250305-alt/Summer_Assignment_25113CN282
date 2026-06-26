#include <stdio.h>

int main() {
    int arr[100], n, i, choice, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\n1. Display Array\n");
    printf("2. Sum of Elements\n");
    printf("3. Largest Element\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Array Elements: ");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += arr[i];
            printf("Sum = %d\n", sum);
            break;

        case 3: {
            int max = arr[0];
            for(i = 1; i < n; i++)
                if(arr[i] > max)
                    max = arr[i];
            printf("Largest Element = %d\n", max);
            break;
        }

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}