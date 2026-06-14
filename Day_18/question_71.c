#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
    
        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            low = mid + 1;
        }
        
        else {
            high = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int arr[] = {11, 12, 22, 25, 64}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 22;
    
    int result = binarySearch(arr, n, target);
    
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}