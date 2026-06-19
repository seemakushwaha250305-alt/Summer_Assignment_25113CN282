#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    
    printf("Enter a string: ");
    scanf("%s", str);

    
    for(int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    
    int found = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character is: %c\n", str[i]);
            found = 1;
            break;
        }
    }
    if(!found) printf("No non-repeating character found.\n");
    return 0;
}