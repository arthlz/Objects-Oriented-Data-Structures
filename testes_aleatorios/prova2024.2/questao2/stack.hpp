#ifndef STACK_H
#define STACK_H

#include <string>
#include "node.hpp"
#define ERROR -1

template<class T>
class Stack{
    private:
        Node<T> *top;
        int size;

    public:
        Stack() : top(nullptr), size(0) {}
        ~Stack();

        T top_value();
        void push(T v);
        void pop();
        void clear();
        int get_size();

};

class EmptyStack{
    private:
        std::string message;

    public:
        EmptyStack(const std::string& _message) : message(_message) {};

        const std::string getMessage() {return this->message;}
};

#endif