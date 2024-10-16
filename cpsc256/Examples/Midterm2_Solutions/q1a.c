#include <stdio.h>
#include <stdlib.h>

int main() {

    const int size = 6;
    int arr[] = {1,2,3,4,5,6};

    for (int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
