#include<stdio.h>
// function for armstrong number 
int armstrong(int n)
{
    int temp =n;
    int sum=0;
    while(temp!=0)
    {
        int d = temp%10;
        sum=sum+d*d*d;
        temp=temp/10;
    }
    if(sum==n)
    return 1;
    else
    return 0;

}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(armstrong(n))
    printf("%d is an armstrong number",n);
else
    printf("%d is not an armstrong number",n);
    return 0;
}