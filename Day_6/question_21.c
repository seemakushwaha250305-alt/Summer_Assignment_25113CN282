#include<stdio.h>
//Convert decimal to binary
int main(){
    int n, binary=0, rem , i=1;
    printf("Enter a number :");
    scanf("%d",&n);
    while(n!=0)
{
    rem =n%2;
    binary = binary +rem*i;
    n=n/2;
    i=i*10;
}
printf("Binnary is %d", binary);
return 0;
}