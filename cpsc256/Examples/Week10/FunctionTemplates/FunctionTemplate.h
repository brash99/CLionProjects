/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/*
 * File:   main.cpp
 * Author: 00465510
 *
 * Created on November 26, 2021, 2:21 PM
 */
#include <iostream>
#include <string>

using namespace std;

/*
 *  Function Template Examples
 */


// Define a function called TripleMin() that returns the minimum value
// of three arguments.  TheType can be any valid C++ variable type, as long
// as the "algebra" of the type has been defined (i.e. '=', '>', '<', etc.)
//
// Just imagine replacing 'TheType' with 'int' or 'string' everywhere!

template<typename TheType>
TheType TripleMin(TheType item1, TheType item2, TheType item3) {
    TheType minVal = item1; // Holds min item value, init to first item

    if (item2 < minVal) {
        minVal = item2;
    }
    if (item3 < minVal) {
        minVal = item3;
    }

    return minVal;
}

// We can also do the same thing with classes!

template<typename TheType>
class TripleItem {
    public:
        TripleItem(TheType val1 = 0, TheType val2 = 0, TheType val3 = 0);
        void PrintAll() const; // Print all data member values
        TheType MinItem() const; // Return min data member value
    private:
        TheType item1; // Data value 1
        TheType item2; // Data value 2
        TheType item3; // Data value 3
};

// Constructor

template<typename TheType>
TripleItem<TheType>::TripleItem(const TheType i1, const TheType i2, const TheType i3) {
    item1 = i1;
    item2 = i2;
    item3 = i3;
}

// Print all data members

template<typename TheType>
void TripleItem<TheType>::PrintAll() const {
    cout << "(" << item1 << "," << item2
         << "," << item3 << ")" << endl;
}

// Return min data member value

template<typename TheType>
TheType TripleItem<TheType>::MinItem() const {
    TheType minVal = item1; // Holds value of min item, init to first item

    if (item2 < minVal) {
        minVal = item2;
    }
    if (item3 < minVal) {
        minVal = item3;
    }

    return minVal;
}

