
#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string name; // Vehicle name

public:
    // Constructor
    Vehicle(const string& vehicleName) : name(vehicleName) {}

    // Pure virtual function
    virtual void honk() const = 0;

    // Virtual destructor
    virtual ~Vehicle() {}
};

// Derived class: Car
class Car : public Vehicle {
public:
    // Constructor
    Car() : Vehicle("Car") {}

    // Override the honk() method
    void honk() const override {
        cout << name << " honks: Beep Beep!" << endl;
    }
};

// Derived class: Bike
class Bike : public Vehicle {
public:
    // Constructor
    Bike() : Vehicle("Bike") {}

    // Override the honk() method
    void honk() const override {
        cout << name << " honks: Ring Ring!" << endl;
    }
};

int main() {
    // Create an array of Vehicle pointers
    Vehicle* vehicles[2];
    vehicles[0] = new Car();  // Car object
    vehicles[1] = new Bike(); // Bike object

    // Demonstrate polymorphism
    for (int i = 0; i < 2; i++) {
        vehicles[i]->honk(); // Calls the overridden honk() method
    }

    // Free dynamically allocated memory
    for (int i = 0; i < 2; i++) {
        delete vehicles[i];
    }

    return 0;
}