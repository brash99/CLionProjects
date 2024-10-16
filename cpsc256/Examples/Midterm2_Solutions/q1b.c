#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    //int product=1;
    //long int product=1; // long int to handle large numbers ... but still, only about 10^21
    unsigned long long int product = 1; // unsigned long long int to handle even larger numbers
    double product2 = 1.0;
    int i=23;

    while (i>1) {
        product = product*i;
        product2 = product2*i;
        i--;
    }
    printf("%ld\n",product);
    printf("%f\n",product2);

    // print the maximum value of an int
    printf("%d\n",INT_MAX);

    // print the maximum value of a long int
    printf("%ld\n",LONG_MAX);

    // print the maximum value of a long long int
    printf("%lld\n",LLONG_MAX);

    return 0;
}

