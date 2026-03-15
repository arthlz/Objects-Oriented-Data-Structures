#include <iostream>

using namespace std;

int main(){

    int x = 7;

    cout << "(x < 10 && x >= -1) = " << (x < 10 && x >= -1) << "\n";
    cout << "(!x && x >= 3) = " << (!x && x >= 3) << endl;
    
    
    bool res_c = (x++ == 8 || x == 7);
    cout << "x++ == 8 || x == 7 = " << res_c << endl;

    return 0;
}