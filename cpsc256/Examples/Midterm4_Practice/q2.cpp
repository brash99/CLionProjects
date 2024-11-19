#include <iostream>
using namespace std;

struct Node {
    int data;       // Data field to store the integer
    Node* next;     // Pointer to the next node in the list

    // Constructor for convenience
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head; // Pointer to the first node of the list

public:
    // Constructor to initialize an empty list
    LinkedList() : head(nullptr) {}

    // Method to add a new node at the end of the list
    void append(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) { // If the list is empty
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) { // Traverse to the end of the list
                temp = temp->next;
            }
            temp->next = newNode; // Attach the new node
        }
    }

    // Method to display all the values in the list
    void display() {
        Node* temp = head;
        while (temp != nullptr) { // Traverse the list
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl; // End of the list
    }

    // Destructor to free allocated memory
    ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;

    // Append integers to the linked list
    list.append(10);
    list.append(20);
    list.append(30);

    // Display the linked list
    cout << "The linked list contains: ";
    list.display();

    return 0;
}
