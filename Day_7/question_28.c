#include<stdio.h>
//Recursive reverse of a number
int reverseNumber(int n) {
    static int reversed = 0;
    if (n == 0) {
        return reversed;
    } else {
        reversed = reversed * 10 + n % 10;
        return reverseNumber(n / 10);
    }
}
int main() {
    int num;
    printf("Enter a number to reverse:");
    scanf("%d", &num);
    if (num < 0) {
        printf("Reverse is not defined for negative numbers.");
    } else {
        printf("Reverse of %d is %d", num, reverseNumber(num));
    }
    return 0;
}