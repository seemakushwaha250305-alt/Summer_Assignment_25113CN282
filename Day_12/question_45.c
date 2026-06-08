#include<stdio.h>
int palindrome(int n)
{
    int temp=n;
    int rev=0;
    while (temp!=0)
    {
        int digit=temp%10;
        rev =rev*10+digit;
        temp=temp/10;
    }
    if(rev==n)
    return 1;
else
return 0;
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(palindrome(n))
    printf("%d is a palindrome number",n);
else
    printf("%d is not a palindrome number",n);
return 0;
}