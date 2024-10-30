/* 
 * File:   main.cpp
 * Author: 00465510
 *
 * Created on October 25, 2021, 10:38 PM
 */

using namespace std;

#include <iostream>
#include "TimeHrMn.h"

/*
 * Demonstration of some of the important aspects of operator overloading
 * 
 * Redefining/defining the meaning of +, -, *, /, <, >, <=, >=, ==, !=, etc.
 *
 * The following operators cannot be overloaded:
 *  . (dot)
 *  .* (pointer to member)
 *  :: (scope resolution)
 *  ?: (ternary)
 *  sizeof (size of)
 *  typeid (type identification)
 *  const_cast (type cast)
 *  dynamic_cast (type cast)
 *  reinterpret_cast (type cast)
 *  static_cast (type cast)
 *  new (memory allocation)
 *  delete (memory deallocation)
 *  
 */

#include "TimeHrMn.h"

/* In order to define all of the relational operators, one needs to
 * define the following:
 *  1. Equality (==)
 *  2. Less-than (<)
 *
 *  Then, the following can be defined in terms of the above:
 *  3. Not equal (!=)
 *  4. Greater than (>)
 *  5. Less than or equal (<=)
 *  6. Greater than or equal (>=)
 */

// Equality (==) operator for two TimeHrMn objects
bool operator==(const TimeHrMn& lhs, const TimeHrMn& rhs) {
   return (lhs.GetHr() == rhs.GetHr()) && 
          (lhs.GetMn() == rhs.GetMn()) &&
          (lhs.GetSec() == rhs.GetSec());
}

// Less-than (<) operator for two TimeHrMn objects
bool operator<(const TimeHrMn& lhs, const TimeHrMn& rhs) {

    // Algorithm 1: Compare hours, then minutes, then seconds
   if (lhs.GetHr() < rhs.GetHr()) {
       return true;
   } else {
       if (lhs.GetHr() > rhs.GetHr()) {
           return false;
       } else {
           if (lhs.GetMn() < rhs.GetMn()) {
               return false;
           } else {
               if (lhs.GetMn() > rhs.GetMn()) {
                   return true;
               } else {
                   if (lhs.GetSec() < rhs.GetSec()) {
                       return true;
                   } else {
                       return false;
                   }
           }
       }
   }

       // Algorithm 2: Convert everything to seconds and compare
       //return (lhs.GetHr()*3600 + lhs.GetMn()*60 + lhs.GetSec()) <
       //         (rhs.GetHr()*3600 + rhs.GetMn()*60 + rhs.GetSec());
}


// Complete the set of relational operators by using previous methods for "==" and "<"
bool operator!=(const TimeHrMn& lhs, const TimeHrMn& rhs) { return !(lhs == rhs); }
bool operator>(const TimeHrMn& lhs, const TimeHrMn& rhs)  { return rhs < lhs;    }
bool operator<=(const TimeHrMn& lhs, const TimeHrMn& rhs) { return !(lhs > rhs); }
bool operator>=(const TimeHrMn& lhs, const TimeHrMn& rhs) { return !(lhs < rhs); }

int main(int argc, char** argv) {
    
    TimeHrMn time1(3, 22, 45.0);
    TimeHrMn time2(2, 50, 34.2);
    TimeHrMn time3(3, 22, 45.0);
    
    time1.Print();
    time2.Print();
    
    TimeHrMn sumTime;

    sumTime = time1 + time2;
    sumTime.Print();
    
    if (time2 < time1) {
        cout << "Everything ok!" << endl;
    }
    
    if (time3 == time1) {
        cout << "Everything ok, still!" << endl;
    }
    
    TimeHrMn elapsedTime = time1 - time2;
    
    elapsedTime.Print();
    
    return 0;
}

