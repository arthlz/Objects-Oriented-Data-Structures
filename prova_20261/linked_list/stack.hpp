#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>

template<typename T>
struct Stack{
  
    int size;

    Stack(){
      size = 0;
    }
    virtual ~Stack(){}

    virtual void push(T item) = 0;
    virtual T pop() = 0;
    virtual T top() = 0;
    virtual void clear() = 0;
    virtual int get_size() = 0;

};


#endif