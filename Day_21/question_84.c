#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string in lowercase: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        // If character is lowercase, convert it by subtracting 32 from its ASCII value
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string: %s", str);
    return 0;
}