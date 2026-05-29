#include<stdio.h>
//program to find product of digits 
int main()
{
    int n,  product=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        product*=n%10;
        n/=10;
    }
    printf("Product of digits :%d",product);
    return 0;
}