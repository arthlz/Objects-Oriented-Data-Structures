#include <bits/stdc++.h>

using namespace std;

int var, *ptr;

int main() {
    var = 100;
    ptr = &var;

    cout << "ptr = " << ptr << "and var = " << var << "\n\n";
    cout << "&ptr = " << &ptr << "\n\n";
    cout << "&var = " << &var << endl;

}