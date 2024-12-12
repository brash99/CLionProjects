// Include standard I/O library ... this provides printf, which is needed for output
#include <stdio.h>

// Function to calculate the sum and product of two integers
// Parameters:
// a - the first integer
// b - the second integer
// sum - a pointer to an integer to store the sum
// product - a pointer to an integer to store the product
void calculate(int a, int b, int* sum, int* product) {
    *sum = a + b; // Calculate the sum and store it at the location pointed to by sum
    *product = a * b; // Calculate the product and store it at the location pointed to by product
}

// Main function
int main() {
    int x=4, y=5, s, p; // Declare two integers and two integers to store the sum and product
    calculate(x, y, &s, &p); // Call the calculate function with the two integers and pointers to the sum and product
    printf("Sum: %d, Product: %d\n", s, p); // Print the sum and product
    return 0; // Return 0 to indicate successful completion
}

// Expected output:
// Sum: 9, Product: 20

// Note: The calculate function takes two integers and two pointers to integers as parameters.
// The function calculates the sum and product of the two integers and stores the results at the locations pointed to by the pointers.
// In the main function, the calculate function is called with two integers and pointers to store the sum and product.
// The sum and product are then printed using printf.

// The calculate function uses pointers to store the results of the calculations.
// This allows the function to modify the values of the sum and product variables in the main function.
// By passing the addresses of the sum and product variables to the function, the function can update the values stored at those addresses.
// This is a common technique in C programming for passing values back from a function.
// It allows functions to modify variables in the calling code without returning multiple values!!!
// Since, in the calculated function, we wish to calculate MORE THAN ONE QUANTITY, we use
// pointers to store the results of the calculations.  If we did not do it this way, we would
// have to return a struct, or an array, or some other data structure that could hold multiple
// values, or we would have to define multiple functions (i.e. one for the sum and one for the product)
// to return the values.  But, by using pointers, we can accomplish the task very simply!!!
