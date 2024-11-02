/*
	1.	Inheritance:
	•	Dog and Cat classes inherit from the base class Animal.
	•	This allows both Dog and Cat to be treated as Animal objects,
        demonstrating the “is-a” relationship.

	2.	Polymorphism:
	•	The makeSound function in the Animal class is declared virtual,
        allowing Dog and Cat to override it.
	•	When calling makeSound on a pointer to Animal, C++ will automatically
        invoke the correct derived class function (e.g., Dog::makeSound or Cat::makeSound),
        demonstrating polymorphic behavior.

	3.	Dynamic Casting:
	•	We use dynamic_cast to cast the Animal pointers back to their
        original derived types (Dog or Cat) so that we can call functions
        specific to each derived class (fetch and climb respectively).

	4.	Memory Management:
	•	unique_ptr is used to manage Animal objects automatically,
        which prevents memory leaks and simplifies memory management.

 This example illustrates how polymorphism allows for flexible handling
 of derived types through base class pointers and how inheritance structures
 the relationships among classes in a hierarchy.
 */

#include <iostream>
#include <vector>
#include <memory>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() const {
        cout << "Some generic animal sound" << endl;
    }

    // Virtual destructor to ensure proper cleanup of derived class objects
    virtual ~Animal() {}
};

// Derived class Dog, inheriting from Animal
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Woof! Woof!" << endl;
    }

    void fetch() const {
        cout << "Dog is fetching a ball!" << endl;
    }
};

// Derived class Cat, inheriting from Animal
class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Meow! Meow!" << endl;
    }

    void climb() const {
        cout << "Cat is climbing a tree!" << endl;
    }
};

int main() {
    // Demonstrating polymorphism
    vector<unique_ptr<Animal>> animals;

    // Adding Dog and Cat objects to the vector
    animals.push_back(make_unique<Dog>());
    animals.push_back(make_unique<Cat>());

    // Loop through each animal and make it make a sound
    for (const auto& animal : animals) {
        animal->makeSound(); // Calls appropriate makeSound() based on object type
    }

    // Downcasting to access derived class-specific functions
    Dog* dog = dynamic_cast<Dog*>(animals[0].get());
    if (dog) {
        dog->fetch();
    }

    Cat* cat = dynamic_cast<Cat*>(animals[1].get());
    if (cat) {
        cat->climb();
    }

    return 0;
}