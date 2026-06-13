#include<stdio.h>
// program to merge an array in another array
int main()
{
    int n, m, i, j;
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    printf("Enter the size of the second array: ");
    scanf("%d", &m);
    int arr1[n], arr2[m], arr3[n + m];
    printf("Enter the elements of the first array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array: ");
    for(i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    // Merging the arrays
    for(i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }
    for(i = 0; i < m; i++)
    {
        arr3[n + i] = arr2[i];
    }
    printf("Merged array: ");
    for(i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}