#include <stdio.h>

int main() {
    char str[100], temp;
    int len = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length excluding the newline character from fgets
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Swap characters from both ends moving inward
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    // Ensure it properly terminates if a newline was stripped
    if(str[len] == '\n') str[len] = '\0'; 

    printf("Reversed string: %s\n", str);
    return 0;
}