#include<stdio.h>
// Armstrong number in a range 
int main()
{
    int n1, n2, i, temp,rev,rem;
    printf("Enter the range of nummbers:");
    scanf("%d %d", &n1,&n2);
    printf("Armstrong number between %d and %d are :", n1, n2);
    for (i=n1; i<=n2; i++)
    {
        temp=i;
        rev=0;
        while(temp!=0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        if(rev==i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}