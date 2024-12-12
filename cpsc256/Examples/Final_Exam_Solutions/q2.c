#include <stdio.h>
#include <stdlib.h>

int main() {
    float x;
    printf("Enter a float: ");
    scanf("%f", &x);

    if (x < 0) {
        printf("The float is negative\n");
    } else if (x == 0) {
        printf("The float is zero\n");
    } else {
        printf("The float is positive\n");
    }

    return 0;
}