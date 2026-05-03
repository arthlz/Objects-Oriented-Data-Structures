#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double n1 = 0.123456, n2=23.987, n3=-123.456;

    cout << left << setw(15) << n1 << endl;

    cout << fixed << setprecision(2) << right << setw(12) << n2 << endl;

    cout << scientific << setprecision(4) << setw(10) << n3 << endl;

    return 0;

}