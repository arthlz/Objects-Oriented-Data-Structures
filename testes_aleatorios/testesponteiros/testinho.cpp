#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    long a = 10, b, *ptr;

    ptr = &a;

    b = *ptr;

    cout << "a = " << a << "\nb = " << b << "\nptr= " << ptr << "\n*ptr = " << *ptr << "\n" << endl;

    *ptr += 10;

    cout << "a = " << a << "\nb = " << b << "\nptr= " << ptr << "\n*ptr = " << *ptr << "\n" << endl;

    *ptr = b;

    cout << "a = " << a << "\nb = " << b << "\nptr= " << ptr << "\n*ptr = " << *ptr << endl;

    return 0;
}