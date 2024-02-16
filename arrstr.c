#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int pages;
};

int main() {
    struct Book library[3];

    // Inputting data into array of structures
    for (int i = 0; i < 3; i++) {
        printf("Enter details of book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", library[i].title);
        printf("Author: ");
        scanf("%s", library[i].author);
        printf("Pages: ");
        scanf("%d", &library[i].pages);
    }

    // Displaying data from array of structures
    printf("\nLibrary:\n");
    for (int i = 0; i < 3; i++) {
        printf("Book %d\n", i + 1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Pages: %d\n", library[i].pages);
    }

    return 0;
}

