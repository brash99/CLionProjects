#include <iostream>
using namespace std;

struct Node {
    int data;       // TODO1: Data field
    Node* next;     // TODO2: Pointer to the next node

    // TODO3: Constructor for convenience
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head; // TODO4: Pointer to the first node in the list

public:
    // TODO5: LinkedList Constructor
    LinkedList() : head(nullptr) {}

    // TODO6: Method to insert at the head of the list
    void insertAtHead(int value) {
        Node* newNode = new Node(value); //TODO7: Create a new node
        newNode->next = head; //TODO8: Point the new node to the current head
        head = newNode; //TODO9: Update the head to the new node
    }

    // TODO10: Method to insert at a specific position
    void insertAtPosition(int value, int position) {
        Node* newNode = new Node(value);

        // TODO11: If inserting at the head
        if (position == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }

        // TODO12: Traverse to the position
        Node* temp = head;
        for (int i = 0; i < position - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        // TODO13: If position is invalid
        if (temp == nullptr) {
            cout << "Error: Position out of bounds!" << endl;
            delete newNode;
            return;
        }

        // TODO14: Insert the new node
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // TODO15: Method to display the entire list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // TODO16: Method to reverse the linked list
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current != nullptr) {
            next = current->next; // TODO17: Save the next node
            current->next = prev; // TODO18: Reverse the pointer
            prev = current;       // TODO19: Move prev one step forward
            current = next;       // TODO20: Move current one step forward
        }

        head = prev; // Update head to the new front
    }

    // TODO21: Destructor to clean up memory
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

    // TODO22: Insert three elements into the list
    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtHead(30);

    // TODO23: Display the list
    cout << "Original list: ";
    list.display();

    // TODO24: Insert at specific position, and display the list
    list.insertAtPosition(25, 1);
    cout << "After inserting 25 at position 1: ";
    list.display();

    // TODO25: Reverse the list, and display the list
    list.reverse();
    cout << "Reversed list: ";
    list.display();

    return 0;
}