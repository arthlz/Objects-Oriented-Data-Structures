#include <iostream>

using namespace std;

void message(){
    cout << "Within function ::message()\n";
}

namespace A{
    void message(){
        cout << "Within function A::message()\n";
        }
}

namespace B{
    void message(void);
}

void B::message(void){
    cout << "Within function B::message()\n";
}

int main(){
    using B::message;

    cout << "Testing namespaces!\n";
    cout << "\nCall of A::message()" << endl;
    A::message();

    cout << "\nCall of B::message() " << endl;
    message();

    cout << "\nCall of::message()" << endl;
    message();

    cout << "\nCall of::message()" << endl;

    ::message();
    return 0;
}