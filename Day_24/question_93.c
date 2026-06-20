#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200] = "";

    printf("Enter primary string: ");
    scanf("%s", str1);
    printf("Enter rotation candidate: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not a rotation.\n");
        return 0;
    }

    /
    strcat(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2) != NULL) {
        printf("String is a rotation.\n");
    } else {
        printf("Not a rotation.\n");
    }
    return 0;
}