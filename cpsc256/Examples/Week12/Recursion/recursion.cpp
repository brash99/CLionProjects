// This is a small program that demonstrates the use of recursion in C++.
//
// The program is a simple one that calculates the factorial of a number using recursion.
// The program takes an integer as input and calculates the factorial of that number using
// a recursive function.

#include <iostream>
using namespace std;

// Function to calculate the factorial of a number using recursion
//
// The key idea in any recursive function is to have an "exit condition" or "base case" that
// stops the recursion. In this case, the base case is when n is 0 or 1, in which case the
// function returns 1. This is because the factorial of 0 and 1 is 1.
//
// The biggest issue with recursion is that it can lead to a stack overflow if the recursion
// goes too deep. This can happen if the base case is not reached, or if the recursion is
// not properly implemented. In this case, the recursion is properly implemented, so we don't
// have to worry about stack overflow.
//
// Oh, and that is why the popular website StackOverflow is called that.  It's a play on words
// that refers to the stack in memory that is used to keep track of function calls in a program.
// If the stack gets too deep, it can overflow, leading to a crash.
//
// In C++ and many other programming languages, the stack has a limited size, so if you have
// too many function calls, you can run out of stack space.  This is why recursion can be dangerous
// if not implemented properly.
//
// My experience has been that computer scientists and programmers love recursion, but it can be
// a bit of a mind-bender for beginners.  It's a powerful tool, but it can be tricky to get right.
// On the other hand, physicists do NOT like recursion, and they tend to avoid it like the plague.
// I think it's because they are used to thinking in terms of differential equations, which are
// inherently recursive, but they don't think of them that way.  They think of them as "differential
// equations" and not as "recursive equations".  It's a bit of a mind game, but it's interesting to
// see how different fields of study approach the same problem in different ways.
//
// The point though is that if we are going to understand binary search trees, we need to understand
// recursion.  It's a fundamental concept in computer science, and it's used in many different
// algorithms and data structures.  So, it's worth taking the time to understand it.


long long int factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: return n * factorial(n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Calculate the factorial of the number using the factorial function
    long long int result = factorial(n);

    // Print the result
    cout << "Factorial of " << n << " = " << result << endl;

    return 0;
}