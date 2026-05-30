#include<stdio.h>
//prime number in a range 
int main()
{
    int n,i;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("Prime numbers between 1 and %d are:\n",n);
    for(i=2; i<=n; i++)
    {
        int j, count=0;
        for (j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}