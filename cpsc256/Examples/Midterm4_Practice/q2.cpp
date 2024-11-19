#include <iostream>
using namespace std;

struct Node {
    int data;       // TODO 1
    Node* next;     // TODO 2

    // TODO 3
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head; // TODO 4

public:
    // TODO 5
    LinkedList() : head(nullptr) {}

    // TODO 6
    void append(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) { // TODO 7
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) { // TODO 8
            }
            temp->next = newNode; // TODO 9
        }
    }

    // TODO 10
    void display() {
        Node* temp = head;
        while (temp != nullptr) { // TODO 11
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl; // TODO 12
    }

    // TODO 13
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

    // TODO 14
    list.append(10);
    list.append(20);
    list.append(30);

    // TODO 15
    cout << "The linked list contains: ";
    list.display();

    return 0;
}
