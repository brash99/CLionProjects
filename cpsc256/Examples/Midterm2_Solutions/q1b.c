#include <stdio.h>
#include <stdlib.h>

int main() {

    long int product=1;
    const int size = 20;
    int i=1;

    while (i<size) {
        product = product*(i+1);
        printf("%d %ld\n",i+1,product);
        i++;
    }
    printf("%ld\n",product);

    return 0;
}

