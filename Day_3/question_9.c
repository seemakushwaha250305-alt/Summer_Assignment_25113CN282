#include<stdio.h>
//check whether the number is prime 
int main()
{
     int i, n;
printf("Enter the number:");
scanf("%d",&n);
for(i=2; i<=n/2; i++)
{
    if(n%i==0)
{  printf("%d is not a prime number ",n);
break;
}
}
if(i>n/2)
{
printf("%d is a prime number ",n);
}
return 0;
}