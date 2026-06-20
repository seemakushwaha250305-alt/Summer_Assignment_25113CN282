#include <stdio.h>

int main() {
    char str[200], longest[50] = "", current[50] = "";
    int i = 0, j = 0, maxLen = 0, curLen = 0;

    printf("Enter a line of text: ");
    fflush(stdin);
    fgets(str, sizeof(str), stdin);

    while(1) {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            if(curLen > maxLen) {
                maxLen = curLen;
                current[j] = '\0';
                for(int k = 0; k <= j; k++) longest[k] = current[k];
            }
            j = 0;
            curLen = 0;
            if(str[i] == '\0' || str[i] == '\n') break;
        } else {
            current[j++] = str[i];
            curLen++;
        }
        i++;
    }
    printf("Longest word: %s\n", longest);
    return 0;
}