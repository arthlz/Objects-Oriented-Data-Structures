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

class Stack{

  private:
    Node* top_Node;
    int size = 0;

  public:

    Stack(){
      top_Node = nullptr;
      size = 0;
    }
    ~Stack(){
      clear();
    }

    void clear(){
      Node* temp = top_Node;
      while (temp != nullptr){
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
        size--;
      }
    }

    bool isEmpty(){
      return top_Node == nullptr;
    }

    void push(int val){ //LIFO = last in first out
      Node* newNode = new Node(val);

      newNode->next = top_Node;
      top_Node = newNode;
      size++;

    }
    
    int pop(){
      if (isEmpty()){
        throw runtime_error("Empty stack");
      }

      Node* temp = top_Node;
      int valor = temp->data;

      top_Node = temp->next;
      size--;

      delete temp; 
      return valor;  
    }

    int get_size(){
      return this->size;
    }

    int peek(){
      if (isEmpty()){
        throw runtime_error("Empty_stack");
      }

      return top_Node->data;

    }

};