#include <iostream>
struct Node{

    int val;
    Node* next;

    Node(int val) : val(val), next(nullptr) {};
};

class Queue {
private:
    Node* frontNode;
    Node* rearNode;

public:
    Queue() {
        frontNode = nullptr;
        rearNode = nullptr;
    }

    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    // Enfileirar (Adiciona no final)
    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (rearNode == nullptr) {
            frontNode = rearNode = newNode;
            return;
        }
        rearNode->next = newNode;
        rearNode = newNode;
    }

    // Desenfileirar (Remove do início)
    void dequeue() {
        if (isEmpty()) {
            std::cout << "Erro: Fila vazia.\n";
            return;
        }
        Node* temp = frontNode;
        frontNode = frontNode->next;

        // Se a fila ficar vazia após a remoção, o rear também deve ser atualizado
        if (frontNode == nullptr) {
            rearNode = nullptr;
        }

        delete temp;
    }

    // Ver o primeiro elemento
    int front() {
        if (isEmpty()) {
            std::cerr << "Fila vazia.\n";
            return -1; 
        }
        return frontNode->val;
    }

    // Verificar se está vazia
    bool isEmpty() {
        return frontNode == nullptr;
    }
};