#include<stdio.h>
//function to find sum of two numbers
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int n1,n2;
    printf("enter two numbers:");
    scanf("%d%d",&n1,&n2);
    int result =sum(n1,n2);
    printf("the sum of %d and %d is %d",n1,n2,result);
    return 0;
}