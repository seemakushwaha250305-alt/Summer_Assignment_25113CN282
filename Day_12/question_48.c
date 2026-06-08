#include<stdio.h>
// function for perfect number
int perfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n)
    return 1;
    else
    return 0;
}
int main()
{
    int n; int sum=0;
    int perfect(int n);
    printf("Enter a number :");
    scanf("%d",&n);
    if(perfect(n))
    printf("%d is a perfect number",n);
else
    printf("%d is not a perfect number",n);
    return 0;
}