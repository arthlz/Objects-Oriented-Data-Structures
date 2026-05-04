#include <iostream>

using namespace std;

int main(){

    int *p = new int;
    int lapis = 50;
    p = &lapis;

    cout << "p = " << p <<
    "\n*p = " << *p << endl;

    delete p;
    p = nullptr;

    cout << "Teste2\np = " << p << "\n*p: " << *p << endl;


    return 0;
}