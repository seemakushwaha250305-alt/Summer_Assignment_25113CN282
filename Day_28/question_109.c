#include <stdio.h>

struct Library {
    int bookId;
    char title[50];
    char author[50];
};

int main() {
    struct Library b;

    printf("Enter Book ID: ");
    scanf("%d", &b.bookId);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    printf("\n----- Library Record -----\n");
    printf("Book ID : %d\n", b.bookId);
    printf("Title   : %s\n", b.title);
    printf("Author  : %s\n", b.author);

    return 0;
}