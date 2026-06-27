#include <stdio.h>

int main() {
    int bookId;
    char title[50], author[50];

    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", author);

    printf("\n----- Library Details -----\n");
    printf("Book ID : %d\n", bookId);
    printf("Title   : %s\n", title);
    printf("Author  : %s\n", author);

    return 0;
}