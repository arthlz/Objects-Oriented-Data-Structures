#include <iostream>
#include <string>

#include "linkedstack.hpp"

int main(){

  Stack<int>* pilha = new LinkedStack<int>();


  try{
    pilha->pop();
  }catch(const StackException& E){
    cout << "Exceção: " << E.what() << endl;
  }






  return 0;
}