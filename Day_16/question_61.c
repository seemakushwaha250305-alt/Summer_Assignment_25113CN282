#include<stdio.h>
// program to find missing number in an array
int main()
{
    int arr[100], n, i, sum = 0, total;
    printf("Enter the number of elements in an array:");
    scanf("%d", &n);
    printf("Enter the elements of the array:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    total = (n + 1) * (n + 2) / 2;
    printf("The missing number is:%d\n", total - sum);
    return 0;
}