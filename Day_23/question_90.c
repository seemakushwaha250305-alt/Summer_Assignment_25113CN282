#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[(unsigned char)str[i]] > 0) {
            printf("First repeating character is: %c\n", str[i]);
            found = 1;
            break;
        }
        freq[(unsigned char)str[i]]++;
    }
    if(!found) printf("No repeating character found.\n");
    return 0;
}