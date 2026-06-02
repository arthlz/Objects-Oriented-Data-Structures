#include <iostream>

struct Node{

    int val;
    Node* next;

    Node(int val) : val(val), next(nullptr) {};
};

class Stack {
private:
    Node* topNode;

public:
    Stack() {
        topNode = nullptr;
    }

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    // Empilhar
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = topNode;
        topNode = newNode;
    }

    // Desempilhar
    void pop() {
        if (isEmpty()) {
            std::cout << "Erro: Pilha vazia.\n";
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
    }

    // Espiar o topo
    int peek() {
        if (isEmpty()) {
            std::cerr << "Pilha vazia.\n";
            return -1; // Retorno de erro genérico
        }
        return topNode->val;
    }

    // Verificar se está vazia
    bool isEmpty() {
        return topNode == nullptr;
    }
};