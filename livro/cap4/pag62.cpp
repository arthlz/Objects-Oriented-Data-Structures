#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Please enter an integer: ";
    cin >> number;
    cout << uppercase
         << "octal \t decimal \t hexadecimal \n"
         << oct << number << ""
         << dec << number << ""
         << hex << number << endl;
         
    return 0;
}