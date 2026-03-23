#include <iostream>
#include <iomanip>

using namespace std;

int var = 0;

namespace Special { int var = 100; }

int main() {
    int var = 10;
    cout << setw(10) << "1° " << var;
    {

        int var = 20;
        cout << setw(10) << "2°: " <<  var << endl;
        {
            ++var;
            cout << setw(10) << "3° " << var;
            cout << setw(10) << "4° " << ++ ::var;
            cout << setw(10) << "5° " << Special::var * 2 << endl;
        }
    cout << setw(10) << "6° " << var - ::var;
    }
    cout << setw(10) << "7° " << var << endl;
    return 0;
}
