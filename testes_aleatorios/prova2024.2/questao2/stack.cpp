#include "stack.hpp"

template <class T>
Stack<T>::~Stack(){
    this->clear();
}

template <class T>
T Stack<T>::top_value(){
    if (this-> size>0){
        return this->top->get_value();
    } else{
        throw EmptyStack("The stack is empty!");
    }
}

template <class T>
void Stack<T>::push(T v) {
    this->top = new Node<T>(v, this-> top);
    this->size++;
}

template <class T>
void Stack<T>::pop(){
    if (this->size > 0){
        Node<T>* temp = this-> top;
        this-> top = this-> top-> get_next();
        this-> size--;
        delete temp;
    }else{
        throw EmptyStack("The stack is empty!");
    }

}

template <class T>
void Stack<T>::clear(){
    while (this->size > 0){
        this-> pop();
    }

}

template <class T>
int Stack<T>::get_size(){
    return this->size;
}

template class Stack<int>;
