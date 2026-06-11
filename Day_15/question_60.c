#include<stdio.h>
// program to move zeroes to end of an array
int main()
{
    int i, arr[100], n, count = 0;
    printf("Enter the number of elements in an array:");
    scanf("%d", &n);
    printf("Enter the elements of the array:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }
    while(count < n)
    {
        arr[count++] = 0;
    }
    printf("The array after moving zeroes to end is:");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}