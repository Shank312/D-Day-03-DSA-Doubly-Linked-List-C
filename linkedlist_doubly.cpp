
/* DSA: Doubly Linked List (C++)

Understand:

Prev and next pointers

Insertion front/back

Traversal both ways

Code:

insertFront(), insertBack(), displayForward(), displayBackward()
*/

// ✅ Full Code with All Operations

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;

    }
};

// Doubly Linked List Class
class DoublyLinkedList {
    private:
        Node* head;

    public:
        DoublyLinkedList() {
            head = nullptr;
        }   
        // insert at front
        void insertFront (int val) {
            Node* newNode = new Node(val);
            if (head == nullptr) {
                head = newNode;
            } 
            else {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        }

        // insert at back
        void insertBack(int val) {
            Node* newNode = new Node(val);
            if (head == nullptr) {
                head = newNode;
            }
            else
                {
                    Node* temp = head;
                    while (temp->next != nullptr) {
                        temp = temp->next;
                    }
                    temp->next = newNode;
                    newNode->prev = temp;
                }
        }

        // Display forward
        void displayForward() {
            Node* temp = head;
            cout << "Forward : ";
            while(temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        // Display backward
        void displayBackward() {
            if (head == nullptr) return;

            Node* temp = head;
            while(temp->next != nullptr) {
                temp = temp->next;            // Go to last
            }
             cout << "Backward: ";
             while(temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->prev;
             }
             cout << endl;
        }
};

// Main driver
int main() {
    DoublyLinkedList dll;

    dll.insertFront(10);
    dll.insertFront(20);
    dll.insertBack(30);
    dll.insertBack(40);

    dll.displayForward();                       // Expected: 20 10 30 40
    dll.displayBackward();                      // Expected: 40 30 10 20
}