#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main() {

    int x = 10;
    int y = 20;

    swap(&x, &y);

    printf("%d %d \n", x, y);

    return 0;
}

