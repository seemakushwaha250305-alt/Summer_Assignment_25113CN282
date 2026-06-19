#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    char maxChar;
    int maxCount = -1;

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[(unsigned char)str[i]] > maxCount) {
            maxCount = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }
    printf("Maximum occurring character is '%c' (occurs %d times).\n", maxChar, maxCount);
    return 0;
}