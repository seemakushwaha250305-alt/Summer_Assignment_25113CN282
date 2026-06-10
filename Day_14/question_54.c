#include5<stdio.h>
// program to find the frequency of an element in an array
int main()
{
    int arr[100], n, i, key, count = 0;
    printf("Enter the number of elements in an array:");
    scanf("%d", &n);
    printf("Enter the elements of the array:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find its frequency:");
    scanf("%d", &key);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }
    printf("The frequency of %d in the array is: %d\n", key, count);
    return 0;
}