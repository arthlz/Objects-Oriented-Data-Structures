#include <iostream>

using namespace std;

struct Node{
  int data;
  Node* next;

  Node(int d){
    data = d;
    next = nullptr;
  }
};

class Queue{

  private:
    Node* front;
    Node* rear;
    int size;

  public:

    Queue(){
      front = nullptr;
      rear = nullptr;
      size = 0;
    }

    ~Queue(){
      this->clear();

    }
    void clear(){
      Node* current = front;

      while (current != nullptr){
        Node* nextNode = current->next;
        delete current;
        this->size--;
        current = nextNode;
      }

      front = nullptr;
      rear = nullptr;
    }

    bool isEmpty(){
      return front == nullptr;
    }

    void enqueue(int val){ // coloca no final da fila
      Node* newNode = new Node(val);

      if (isEmpty()){
        front = rear = newNode;
        size++;
        return ;
      }

      rear->next = newNode;
      rear = newNode;
      size++;
    }

    int dequeue(){ // tira do início da fila
      if (isEmpty()){
        throw runtime_error("Empty queue\n");
      }

      Node* temp = front;
      int val_to_save = temp->data;

      front = front->next;

      if (front == nullptr){
        rear = nullptr;
      }
      size--;
      delete temp;

      return val_to_save;

    }

    int get_front(){
      if (front == nullptr){
        throw new runtime_error("Empty queue\n");
      }
      return front->data;
    }

    int get_size(){
      return this->size;
    }

};