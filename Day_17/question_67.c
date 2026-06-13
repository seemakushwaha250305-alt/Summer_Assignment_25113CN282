#include<stdio.h>
//program to intersection of an array
int main ()
{
    int n, m, i, j, k;
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
    // Finding the intersection
    k = 0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(arr1[i] == arr2[j])
            {
                arr3[k] = arr1[i];
                k++;
                break;
            }
        }
    }
    printf("The intersection of the two arrays is: \n");
    for(i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}