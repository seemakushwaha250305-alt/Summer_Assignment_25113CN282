#include<stdio.h>
// program to perform linear search
int main()
{
    int arr[100], n, i, key, found = 0;
    printf("Enter the number of elements in an array:");
    scanf("%d", &n);
    printf("Enter the elements of the array:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d", &key);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            break;
        }
    }
    if(found)
    {
        printf("Element found at index %d\n", i);
    }
    else
    {
        printf("Element not found in the array\n");
    }
    return 0;
}