#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0;

    printf("Enter a string with spaces: ");
    fgets(str, sizeof(str), stdin);

    
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0'; // Append new null terminator

    printf("String after removing spaces: %s", str);
    return 0;
}