#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter word count: ");
    scanf("%d", &n);
    
    // Clear the input buffer newline left over by scanf
    while (getchar() != '\n');

    char words[n][50], temp[50];
    printf("Enter the %d words (one per line):\n", n);
    for(int i = 0; i < n; i++) {
        fgets(words[i], sizeof(words[i]), stdin);
        
        // Remove trailing newline character added by fgets
        size_t len = strlen(words[i]);
        if (len > 0 && words[i][len - 1] == '\n') {
            words[i][len - 1] = '\0';
        }
    }

    // Sorting by string length
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(strlen(words[j]) > strlen(words[j + 1])) {
                // Swap strings
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }
    return 0;
}