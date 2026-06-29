#ifndef NODE_HPP
#define NODE_HPP

using namespace std;
#include <iostream>

template<typename T>
class Node{

  private:
    T data;
    Node<T>* next;

  public:
    Node(T d){
      data = d;
      next = nullptr;
    }

    T get_value(){
      return this->data;
    }

    Node<T>* get_next(){
      return this->next;
    }

    void set_value(T v){
      this->data = v;
    }

    void set_next(Node<T>* n){
      this->next = n;
    } 

};







#endif