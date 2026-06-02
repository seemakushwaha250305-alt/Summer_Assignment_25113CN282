#include<stdio.h>
// Count set bits in a number
int main(){

    int n, count=0;
    printf("Enter a number :");
    scanf("%d",&n);
    while(n!=0){
        n = n & (n-1);
        count++;
    }
    printf("Number of set bits is %d", count);
    return 0;
}