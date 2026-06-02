#include<stdio.h>
// Binary to decimal
int main(){
    int binary, decimal=0, rem, i=1;
    printf("Enter a binary number :");
    scanf("%d",&binary);
    while(binary!=0){
        rem = binary%10;
        decimal = decimal + rem*i;
        binary = binary/10;
        i = i*2;
    }
    printf("Decimal is %d", decimal);
    return 0;
}