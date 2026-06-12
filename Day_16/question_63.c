#include<stdio.h>
// program to find pair with given sum  in an arrray
int main()
{
    int n, i, j, sum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the sum: ");
    scanf("%d", &sum);
    printf("The pairs with given sum are: \n");
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("%d + %d = %d\n", arr[i], arr[j], sum);
            }
        }
    }
    return 0;
}