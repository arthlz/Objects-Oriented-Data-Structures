#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    unsigned char c = 0;
    unsigned int code = 0;

    cout << "\nEnter a decimal character code ";
    cin >> code;

    c = code;

    cout << "\n The corresponding character: " << c << endl;

    code = c;

    cout << "\nCharacter Codes:"
         << "\nDecimal: " << setw(3) << dec << code
         << "\nOctal: " << setw(3) << oct << code
         << "\nHex: " << setw(3) << hex << code << endl;

    return 0;
}
