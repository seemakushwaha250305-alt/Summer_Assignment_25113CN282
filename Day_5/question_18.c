#include<stdio.h>
//Check strong number 
int main()
{
    int n, sum=0 , temp,rem;
    printf("Enter a number :");
    scanf("%d",&n);
    temp=n;
 while(temp>0)
 {
    rem=temp%10;

    int fact=1;
    for(int i=1;i<=rem;i++)
    {
        fact*=i;
    }
    sum+=fact;
    temp/=10;
 }
 if(sum==n)
 printf("Strong number");
 else
 printf("Not a strong number");
 return 0;
}