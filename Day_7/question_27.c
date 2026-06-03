#include<stdio.h>
//Recursive ssum of digits of a number
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}
int main() {
    int num;
    printf("Enter a number to find the sum of its digits:");
    scanf("%d", &num);
    if (num < 0) {
        printf("Sum of digits is not defined for negative numbers.");
    } else {
        printf("Sum of digits of %d is %d", num, sumOfDigits(num));
    }
    return 0;
}