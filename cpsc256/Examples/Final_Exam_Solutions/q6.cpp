#include <iostream>

using namespace std;

class Animal {
public:
    // original: void speak() {
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

// original: class Dog : Animal {
class Dog : public Animal {
public:
    // original: void speak() {
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

int main() {

    // original main code:
    // Dog myDog;
    // myDog.speak();
    Animal* myDog = new Dog();
    myDog->speak();

    return 0;
}

// Summary of changes:
// 1. Added virtual keyword to the speak() method in the Animal class to make it avirtual function.
// 2. Changed the inheritance of the Dog class from private to public to ensure that the
//      speak() method is accessible.
// 3. Added the override keyword to the speak() method in the Dog class to explicitly
//          indicate that it is overriding a virtual function from the base class.
// 4. Modified the main function to create a pointer of type Animal and assign it to a
//      new Dog object. This allows for dynamic dispatch of the speak() method based on the
//      actual object type.
// 5. Changed the call to the speak() method using the Animal pointer to demonstrate
//      polymorphic behavior, where the Dog's speak() method is called instead of the
//      Animal's speak() method.
//
// Notes:
// - this was a quite difficult problem, admittedly.  The key concept here is polymorphism
//      and dynamic dispatch.  When a method is declared as virtual in a base class, it can
//      be overridden in derived classes.  When a pointer to the base class is used to point
//      to an object of a derived class, the method call is resolved at runtime based on the
//      actual type of the object.  This is known as dynamic dispatch or late binding.