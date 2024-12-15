#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct{
    char title[50];
    char author[50];
    float price;
}Book;

void printBooks(Book *b, int size){
    for (int i = 0; i < size; i++) {
        printf("Title: %s\nAuthor: %s\nPrice: $%.2f\n\n", (b+i)->title, (*(b+i)).author, b[i].price);
    }
}

int main() {
    Book books[MAX_BOOKS];
    int n;

    printf("Enter the number of books: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);

        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);

        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar();
        printf("\n");
    }

    printf("Book Details:\n");
    printBooks(books, n);

    printf("Size of Book structure: %zu bytes\n", sizeof(Book));
    return 0;
}
