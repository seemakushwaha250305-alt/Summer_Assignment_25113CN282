#include<stdio.h>
int main(){
    
    char str[100];
    int l=0;
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    while(str[l]!='\0'&& str[l]!='\n'){

    l++;
    }

printf("length of string :%d\n", l);
return 0;
}