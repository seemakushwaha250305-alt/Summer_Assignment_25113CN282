#include <stdio.h>

void sortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
        
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {12, 64, 11, 25, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: \n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    sortDescending(arr, n);
    
    printf("\nArray sorted in descending order: \n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    return 0;
}