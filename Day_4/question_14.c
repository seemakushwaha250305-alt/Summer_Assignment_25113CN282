#include<stdio.h>
// Find nth term of fibonacci series
int main()
{
    int a,b,sum,n,i;
    printf("Enter the term number");
    scanf("%d",&n);
    a=0;
    b=1;
    if(n==1)
    {
        printf("The %dth term of the Fibonacci series is: %d", n, a);
    }
    else if(n==2)
    {
        printf("The %dth term of the Fibonacci series is: %d", n, b);
    }
    else
    {
        for(i=3;i<=n;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        printf("The %dth term of the Fibonacci series is: %d", n, b);
    }
    return 0;
}