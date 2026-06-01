#include <iostream>

using namespace std;

class Node{
    public:
        int dado;
        Node* next;

        Node(int val) {
            dado = val;
            next = nullptr;
        }
};

Node* reverseLista(Node* head){
    Node *prev=nullptr, *current=head, *nextTemp=nullptr;

    while (current != nullptr){
        nextTemp = current->next;
        current->next = prev;
        prev = current;
        current = nextTemp;
    }

    return prev;
};

void imprimirLista(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->dado << " -> ";
        temp = temp->next;
    }
    cout << "nullptr\n";
}

int main() {
    // lista: 1 -> 2 -> 3 -> 4 -> nullptr
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Lista Original: ";
    imprimirLista(head);

    // inversão d a lista
    head = reverseLista(head);

    cout << "Lista Reversa:  ";
    imprimirLista(head);

    return 0;
}
