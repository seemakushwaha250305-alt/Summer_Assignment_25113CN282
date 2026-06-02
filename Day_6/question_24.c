#include<stdio.h>
///Find x^n without pow function

int main()
{
    int x, n, result=1;
    printf("Enter a number :");
    scanf("%d",&x);
    printf("Enter power :");
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        result = result * x;
    }
    printf("%d^%d is %d", x, n, result);
    return 0;
}