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
        void SetName(string name) {this->name = name;}
        string GetName() const {return name;}
       
        void SetAddress(string address) {this->address = address;}
        string GetAddress() const {return address;}
       
        string GetDescription() const { cout << "Business GetDescription: "
                    << endl; return name + " -- " + address;}
        //virtual string GetDescription() const { cout << "Business GetDescription: "
        //    << endl; return name + " -- " + address;}

};

// Define a new class that INHERITS from the Business class
class Restaurant : public Business {

    private:
        int rating;

    public:
       
        // Add additional methods for the private member variables of the
        // derived class
        void SetRating(int rating) {this->rating = rating;}
        int GetRating() const {return rating;}
       
        // Override the GetDescription method of the base class!
       
        string GetDescription() const {
           cout << "Restaurant GetDescription: " << endl;
           return name + " -- " + address +
              "\n  Rating: " + to_string(rating);
        }
      
        /*string GetDescription() const override {
             cout << "Restaurant GetDescription: " << endl;
             return name + " -- " + address +
                "\n  Rating: " + to_string(rating);
        }*/

};

#endif /* BUSINESS_H */

