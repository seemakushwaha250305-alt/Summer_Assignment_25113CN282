#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int isAnagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    for(int i = 0; str1[i] != '\0'; i++) freq[(unsigned char)str1[i]]++;
    for(int i = 0; str2[i] != '\0'; i++) freq[(unsigned char)str2[i]]--;

    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram) printf("Strings are anagrams.\n");
    else printf("Strings are NOT anagrams.\n");
    return 0;
}