#include <iostream>
#include <cmath> // For M_PI in Circle area calculation
using namespace std;

// Abstract base class
class Shape {
    protected:
        string name; // Name of the shape
    public:
        // Constructor to initialize the shape's name
        Shape(const string& shapeName) : name(shapeName) {}

        // Virtual function for calculating the area (pure virtual function)
        virtual double getArea() const = 0;

        // Non-virtual function to print the shape's name
        void printName() const {
            cout << "Shape: " << name << endl;
        }

        // Virtual destructor
        virtual ~Shape() {}
};

// Derived class: Circle
class Circle : public Shape {
    private:
        double radius;
    public:
        // Constructor
        Circle(double r) : Shape("Circle"), radius(r) {}

        // Override getArea
        double getArea() const override {
            return M_PI * radius * radius; // calculat and return area formula: πr²
        }
};

// Derived class: Rectangle
class Rectangle : public Shape {
    private:
        double width, height;
    public:
        // Constructor
        Rectangle(double w, double h) : Shape("Rectangle"), width(w), height(h) {}

        // Override getArea
        double getArea() const override {
            return width * height; // calculate and return area formula: width × height
        }
};

int main() {
    // Create objects of derived classes
    Shape* shapes[2]; // Array of pointers to Shape objects
    shapes[0] = new Circle(5.0);        // create Circle with radius 5
    shapes[1] = new Rectangle(4.0, 6.0); // create Rectangle with width 4 and height 6

    // Loop over the array of pointers to Shape (one for Circle and one for Rectangle)
    for (int i = 0; i < 2; i++) {
        shapes[i]->printName(); // Calls the non-virtual printName method
        cout << "Area: " << shapes[i]->getArea() << endl; // Calls the overridden getArea method
    }

    // Free dynamically allocated memory
    for (int i = 0; i < 2; i++) {
        delete shapes[i];
    }

    return 0;
}
