#include <stdio.h>

int main() {
    char str[100];
    int checked[256] = {0};
    int j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(checked[(unsigned char)str[i]] == 0) {
            checked[(unsigned char)str[i]] = 1;
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String after removing duplicates: %s\n", str);
    return 0;
}