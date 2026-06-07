
#include<stdio.h>
// function to find maximum
int max(int a, int b)
{
    return a>b?a:b;
}
int main()
{
    int n1,n2;
    printf("enter two numbers:");
    scanf("%d%d",&n1,&n2);
    int result =max(n1,n2);
    printf("the maximum of %d and %d is %d",n1,n2,result);
    return 0;
}