#include <iostream>

using namespace std;


int main(){

    int a = 10;

    const int& cref = a;

    a += 5; // It isn't possible to add a number to cref, but to a, it's possible.

    cout << "the cref is: " << cref << " and the number a = " << a << endl;

    return 0;
}