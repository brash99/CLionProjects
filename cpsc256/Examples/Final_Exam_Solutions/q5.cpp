#include <iostream>

using namespace std;

// Function to calculate the factorial of a number using recursion
// The key idea in any recursive function is to have an "exit condition" or "base case" that
// stops the recursion. In this case, the base case is when n is 0 or 1, in which case the
// function returns 1. This is because the factorial of 0 and 1 is 1.
// The biggest issue with recursion is that it can lead to a stack overflow if the recursion
// goes too deep. This can happen if the base case is not reached, or if the recursion is
// not properly implemented. In this case, the recursion is properly implemented, so we don't
// have to worry about stack overflow ... or do we?
//
// If we call factorial(5), then the recursion will look like this:
// factorial(5) = 5 * factorial(4)
// factorial(4) = 4 * factorial(3)
// factorial(3) = 3 * factorial(2)
// factorial(2) = 2 * factorial(1)
// factorial(1) = 1 ... and this is the base case, so we return 1
//
// Now, we can substitute the values back up the chain:
// factorial(2) = 2 * 1 = 2
// factorial(3) = 3 * 2 = 6
// factorial(4) = 4 * 6 = 24
// factorial(5) = 5 * 24 = 120
//
// So, the result of factorial(5) is 120, which is the factorial of 5.
//
// However, if we were to call this function with a negative number, then the recursion would
// never reach the base case, and it would keep going until it ran out of stack space.  This
// is why it's important to have a proper base case in a recursive function.

int factorial(int n) {
    if (n == 0|| n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}

// The output of this program is:
// Factorial of 5 is 120