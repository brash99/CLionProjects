#include <stdio.h>
#include <stdlib.h>

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n = 10;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int max;
    max = findMax(arr, n);

    printf("The maximum value in the array is: %d\n", max);
}