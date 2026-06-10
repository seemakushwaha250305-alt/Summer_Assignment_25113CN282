#include<stdio.h>
//program to find duplicate in array
int main()
{
    int arr[100], n, i, j, duplicate = 0;
    printf("Enter the number of elements in an array:");
    scanf("%d", &n);
    printf("Enter the elements of the array:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }
        if(duplicate)
        {
            break;
        }
    }
    if(duplicate)
    {
        printf("There are duplicate elements in the array\n");
    }
    else
    {
        printf("There are no duplicate elements in the array\n");
    }
    return 0;
}