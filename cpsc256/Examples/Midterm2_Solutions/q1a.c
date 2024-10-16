#include <stdio.h>
#include <stdlib.h>

int main() {

    const int size = 6;
    int arr[] = {1,2,3,4,5,6};

    // the following three lines are all that is needed for this question
    for (int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    // not needed for this question, but useful for checking!
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
