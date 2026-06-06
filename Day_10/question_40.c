#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
    
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }


        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        ch -= 2;
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", ch);
            ch--;
        }

        
        printf("\n");
    }

    return 0;
}