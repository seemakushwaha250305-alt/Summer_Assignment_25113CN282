#include<stdio.h>
// print  star pyramid pattern
int main()
{
    int rows=5;
    int i,j;
    for (i=1; i<=rows; i++){
        for (j=1; j<=2*rows-1; j++){
            if (j<=rows-i || j>=rows+i){
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}