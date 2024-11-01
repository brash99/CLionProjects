#include <iostream>
#include <string>

#include "FunctionTemplate.h"

using namespace std;

int main(int argc, char** argv) {

    // Three integers
    int num1 = 55; // Test case 1, item1
    int num2 = 99; // Test case 1, item2
    int num3 = 66; // Test case 1, item3

    // Three chars
    char let1 = 'a'; // Test case 2, item1
    char let2 = 'z'; // Test case 2, item2
    char let3 = 'm'; // Test case 2, item3

    // Three strings
    string str1 = "zzz"; // Test case 3, item1
    string str2 = "aaa"; // Test case 3, item2
    string str3 = "mmm"; // Test case 3, item3

    // Try TripleMin function with ints
    cout << "Items: " << num1 << " " << num2 << " " << num3 << endl;
    cout << "Min: " << TripleMin(num1, num2, num3) << endl << endl;

    // Try TripleMin function with chars
    cout << "Items: " << let1 << " " << let2 << " " << let3 << endl;
    cout << "Min: " << TripleMin(let1, let2, let3) << endl << endl;

    // Try TripleMin function with strings
    cout << "Items: " << str1 << " " << str2 << " " << str3 << endl;
    cout << "Min: " << TripleMin(str1, str2, str3) << endl << endl;

    // Three booleans (should work, since true = 1 and false = 0)
    bool b1 = true;
    bool b2 = false;
    bool b3 = true;

    // Try TripleMin function with booleans
    cout << "Items: " << b1 << " " << b2 << " " << b3 << endl;
    cout << "Min: " << TripleMin(b1, b2, b3) << endl << endl;

    cout << "-------------------------------------------------" << endl;

    TripleItem<int> triInts(9999, 5555, 6666); // TripleItem class with ints
    TripleItem<short> triShorts(99, 55, 66); // TripleItem class with shorts

    // Try functions from TripleItem
    triInts.PrintAll();
    cout << "Min: " << triInts.MinItem() << endl << endl;

    triShorts.PrintAll();
    cout << "Min: " << triShorts.MinItem() << endl << endl;


    return 0;
}

