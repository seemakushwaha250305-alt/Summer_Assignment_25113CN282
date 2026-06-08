#include<stdio.h>
//function  for fibbonacci
int fibbonacci(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fibbonacci(n-1)+fibbonacci(n-2);
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("The %d th term of fibbonacci series is %d",n,fibbonacci(n));
    return 0;
}
