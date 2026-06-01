#include <iostream>
#include "../Node.h"

class LinkedList{

private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    ~LinkedList() {
        Node* current = head;
        while (current != nullptr){
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    void append(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp -> next;
        }
        temp->next = newNode;
    }


    void remove(int val){
        if (head==nullptr) return;

        if (head-> data = val) {
            
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        Node* previous = nullptr;

        while (current != nullptr && current->data != val){
            previous = current;
            current = current->next;
        }
        if (current == nullptr) return;

        previous->next = current->next;
        delete current;
        
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp-> data << " -> ";
            temp = temp-> next;
        }

        std::cout << "NULL\n";
    }


};