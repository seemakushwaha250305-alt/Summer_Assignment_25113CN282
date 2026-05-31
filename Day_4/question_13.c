#include<stdio.h>
//Generate Fibonacci series
int main()
{
    int a,b, sum,n,i;
    printf("Enter the number of terms ");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("Fibonacci series is:");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("\n");
    return 0;
}