#include <stdio.h>

int main() {
    char str[200];
    int count[256] = {0}; // Array to hold counts of all 256 ASCII characters

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate frequency of each character
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        count[(unsigned char)str[i]]++;
    }

    printf("\nCharacter Frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("'%c' : %d\n", i, count[i]);
        }
    }
    return 0;
}