#include <stdio.h>

void SwapValues(int* pUserVal1, int* pUserVal2, int* pUserVal3, int* pUserVal4){
    int tempOne = *pUserVal1;
    int tempTwo = *pUserVal3;
    *pUserVal1= *pUserVal2;
    *pUserVal2 = tempOne;
    *pUserVal3 = *pUserVal4;
    *pUserVal4 = tempTwo;
}

int main(void) {

    int valOne, valTwo, valThree, valFour;
    scanf("%d %d %d %d", &valOne, &valTwo, &valThree, &valFour);
    SwapValues(&valOne, &valTwo, &valThree, &valFour);
    printf("%d %d %d %d\n", valOne, valTwo, valThree, valFour);

    return 0;
}