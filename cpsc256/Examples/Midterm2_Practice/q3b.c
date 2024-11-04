#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book_struct {
    char title[50];
    float price;
} Book;

Book InitBook() {
    Book newbook;
    // the following statement is what we would have hoped that newbook.title = "blah"; would do!
    strcpy(newbook.title, "blah");
    newbook.price = 9.99;
    return newbook;
}

int main() {

    Book mybook = InitBook();
    printf("%s\n", mybook.title);
    printf("%f\n", mybook.price);

    return 0;
}

