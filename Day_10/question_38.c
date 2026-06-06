#include<stdio.h>
// print reverse full pyramid pattern
int main()
{
    int rows=5;
    int i,j;
    for (i=1; i<=rows; i++){
        for (j=1; j<=2*rows-1; j++){
            if (j<i || j>2*rows-i){
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}