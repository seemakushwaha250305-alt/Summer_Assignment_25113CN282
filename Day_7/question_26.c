#include<stdio.h>
// Recursive Fibonacci 
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
        else{
            return fibonacci(n-1)+fibonacci(n-2);
        
        }
        }

        int main(){
            int num;
            printf("Enter a number to find its Fibonacci:");
            scanf("%d",&num);
            if(num<0){
                printf("Fibonacci is not defined for negative numbers.");
            } else {
                printf("Fibonacci of %d is %d", num, fibonacci(num));
            }

    }

