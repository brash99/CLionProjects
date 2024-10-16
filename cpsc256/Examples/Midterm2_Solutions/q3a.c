#include <stdio.h>
#include <stdlib.h>

// function to swap two integers - this function is all that is needed for this question
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

// main function - not needed for this question, but useful for checking!
int main() {

    int x = 10;
    int y = 20;

    swap(&x, &y);

    printf("%d %d \n", x, y);

    return 0;
}

