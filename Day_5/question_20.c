#include<stdio.h>
// Find largest prime factor of a number;
int main(){
    int n, max=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i=2; i<=n; i++)
    {
        while (n%i==0)
        {
            max=i;
            n=n/i;
        }

    }
    printf("Largest prime facctor  is %d", max);
    return 0;
}