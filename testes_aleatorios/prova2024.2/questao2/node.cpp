#include "node.hpp"

template<class T>
Node<T>::Node(T _v, Node<T>* _n){
    this->value = _v;
    this->next = _n;
}

template<class T>
T Node<T>::get_value(){
    return this-> value;
}

template<class T>
Node<T>* Node<T>::get_next(){
    return this->next;
}