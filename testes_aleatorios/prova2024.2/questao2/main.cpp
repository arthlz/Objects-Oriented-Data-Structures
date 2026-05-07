#include "stack.hpp"
#include <iostream>

using namespace std;

int main(){
    Stack<int>* s = new Stack<int>();
    s-> push(10);
    s-> push(20);
    s-> push(30);

    while (s-> get_size() > 0) {
        cout << "top - " << s->top_value() << endl;
        s->pop();
    }
    try{
        cout << "top (empty) = " << s->top_value() << endl;
    }catch (EmptyStack& e){
        cout << e.getMessage() << endl;
    }
    
    delete s;
    return 0;
}