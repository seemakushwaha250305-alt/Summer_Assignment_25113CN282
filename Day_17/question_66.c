#include<stdio.h>
//program to union an array
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
    // Merging the arrays
    for(i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }
    for(i = 0; i < m; i++)
    {
        arr3[n + i] = arr2[i];
    }
    // Removing duplicates
    for(i = 0; i < n + m; i++)
    {
        for(j = i + 1; j < n + m; j++)
        {
            if(arr3[i] == arr3[j])
            {
                for(k = j; k < n + m - 1; k++)
                {
                    arr3[k] = arr3[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    printf("The union of the two arrays is: \n");
    for(i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}