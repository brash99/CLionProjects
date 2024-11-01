/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   Business.h
 * Author: 00465510
 *
 * Created on November 20, 2021, 11:20 AM
 */

#ifndef BUSINESS_H
#define BUSINESS_H

#include <string>
#include <iostream>

using namespace std;

class Business {

    // Protected member variables!!! Derived classes have access, but nobody else!
    protected:
        string name;
        string address;

    public:

        // Constructor for the Business class
        Business(string name = "no name", string address = "no address") {
            this->name = name;
            this->address = address;
        }

        // Add setter and getter methods for the private member variables
        void SetName(string name) {this->name = name;}
        string GetName() const {return name;}
       
        void SetAddress(string address) {this->address = address;}
        string GetAddress() const {return address;}

        // Add a method to return a description of the object

        //string GetDescription() const { cout << "Business GetDescription: "
        //            << endl; return name + " -- " + address;}

        virtual string GetDescription() const { cout << "Business GetDescription: "
            << endl; return name + " -- " + address;}

};

// Define a new class that INHERITS from the Business class
class Restaurant : public Business {

    private:
        int rating;

    public:

        // Constructor for the Restaurant class
        Restaurant(string name = "no name", string address = "no address", int rating = 0) :
            Business(name, address) {
            this->rating = rating;
        }
       
        // Add setter and getter methods for the additional private member variables
        void SetRating(int rating) {this->rating = rating;}
        int GetRating() const {return rating;}
       
        // Override the GetDescription method of the base class!
        // This is an example of RUN-TIME polymorphism
        // The compiler cannot figure out which GetDescription method to call
        // until the program is actually running.
        //
        // Note that we can access the member variables of the base class directly
       
        /*string GetDescription() const {
           cout << "Restaurant GetDescription: " << endl;
           return name + " -- " + address +
              "\n  Rating: " + to_string(rating);
        }*/
      
        string GetDescription() const override {
             cout << "Restaurant GetDescription: " << endl;
             return name + " -- " + address +
                "\n  Rating: " + to_string(rating);
        }

};

#endif /* BUSINESS_H */

