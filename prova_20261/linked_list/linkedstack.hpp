#ifndef LINKEDSTACK_HPP
#define LINKEDSTACK_HPP

#include <iostream>
#include <string>
#include "stack.hpp"
#include "node.hpp"
#include <stdexcept> // throw runtime_error("Empty;")

using namespace std;

class StackException : public runtime_error{
  public:
    StackException(const string& msg) : runtime_error(msg) {}
};

template<typename T>
class LinkedStack: public Stack<T>{

  protected:
    Node<T>* top_node;


  public:
    LinkedStack(){
      top_node = nullptr;
    }

    ~LinkedStack(){
      clear();
    }

    void clear(){
      Node<T>* curr = top_node;

      while (curr != nullptr){
        Node<T>* NextNode = curr->get_next();
        delete curr;
        curr = NextNode;
      }
      this->top_node=nullptr;
      this->size = 0;
    }

    int get_size(){
      return this->size;
    }

    T top(){
      if (isEmpty()){
        throw StackException("Tentativa de ver o topo, mas pilha tá vazia");
      }

      return top_node->get_value();
    }

    bool isEmpty(){
      return top_node == nullptr;
    }

    T pop(){
      if (isEmpty()){
        throw StackException("Tentativa do pop, mas pilha vazia");
      }

      Node<T>* nextNode = top_node->get_next();

      T val = top_node->get_value;

      delete top_node;
      top_node = nextNode;

      this->size--;

      return val;
    }

    void push(T item){
      Node<T>* newNode = new Node<T>(item);

      newNode->next = top_node;
      this->top_node = newNode;

      this->size++;
    }

};





#endif