#include<stdio.h>
// check whether the number  is  palindrome or not
int main()
{
    int  n, rev=0, temp;
    printf("Enter the number :");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rev=rev*10 + n%10;
        n/=10;
    }
    if(temp==rev)
        printf("The number is palindrome");
    else
        printf("The number is not palindrome");
    return 0;
}