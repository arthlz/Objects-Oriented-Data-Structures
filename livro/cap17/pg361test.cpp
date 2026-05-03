#include <iostream>

using namespace std;

int main(){
    const int a = 5, b = 10, *p = &a;
    cout << "p = " << p << "\na = " << a
    << "\n*p = " << *p << "\n&a = " << &a << endl;

    p = &b;

    cout << "now p = b: " << p << "\n*p = " << *p << endl;


    return 0;

}