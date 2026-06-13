// find common elements in an array
#include<stdio.h>
int main()
{
    int n, m, i, j;
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    printf("Enter the size of the second array: ");
    scanf("%d", &m);
    int arr1[n], arr2[m];
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
    printf("The common elements in the two arrays are: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {

    
            if(arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    return 0;
}